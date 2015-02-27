#include "mainapi.h"

MainApi::MainApi(QQmlContext *context, QObject *parent) :
    QObject(parent),
    cntx(context),
    cnfgHolder(new ConfigHolder("cuttingstation.conf", this)),
    ccDb(new CuttingCourseDatabase(this)),
    profitApi(nullptr),
    shwsApi(nullptr)
  #ifndef Q_OS_ANDROID
  ,cutterApi(nullptr),
    m_regVt2(0xDC30),
    m_regVt3(0xBA30)
  #endif
{
    cntx->setContextProperty("MainApi", this);
    cntx->setContextProperty("configHolder", cnfgHolder);
    connect(this, &MainApi::statusError, this, &MainApi::logWriteError);

    cntx->setContextProperty("cuttingCourses", 0);// todo delete
    ccDb->openDatabase();
    connect(ccDb, &CuttingCourseDatabase::statusErrorDb,
            this, &MainApi::logWriteError);
    logWrite("Start program");
}

MainApi::~MainApi()
{
    delete cnfgHolder;
#ifndef Q_OS_ANDROID
    delete cutterApi;
#endif

    logWrite("Stop program");
}

void::MainApi::logIn(QString userName, QString password)
{
    if (profitApi != nullptr)
    {
        delete profitApi;
        profitApi = nullptr;
    }
    if (shwsApi != nullptr)
    {
        delete shwsApi;
        shwsApi = nullptr;
    }
    cnfgHolder->initialize();
    cnfgHolder->setUsername(userName);
    cnfgHolder->setPassword(password.toUpper());
#ifndef Q_OS_ANDROID
    if (cutterApi != nullptr)
    {
        delete cutterApi;
        cutterApi = nullptr;
    }
    cutterApi = new CutterApi(cnfgHolder->port(),
                              cnfgHolder->port2(),
                              cnfgHolder->baudrate(),
                              static_cast<QSerialPort::DataBits>(cnfgHolder->databits()),
                              static_cast<QSerialPort::Parity>(cnfgHolder->parity()),
                              static_cast<QSerialPort::StopBits>(cnfgHolder->stopbits()),
                              static_cast<QSerialPort::FlowControl>(cnfgHolder->flowcontrol()));
    connect(cutterApi, &CutterApi::statusLoad, this, &MainApi::logWrite);
    connect(cutterApi, &CutterApi::statusError, this, &MainApi::logWriteError);
    connect(cutterApi, &CutterApi::nextStep, this, &MainApi::nextStep);
#endif
    if (userName.toUpper() == "DEMO" && password.toUpper() == "DEMO")
    {
        profitApi = new ProfitApiMockData(this);
        shwsApi = new ShwsApiMockData(this);
    }
    else if (userName.toUpper() == "DEMOJDF" && password.toUpper() == "DEMOJDF")
    {
        profitApi = new ProfitApiFile(cnfgHolder->pathFileJdf(), "jdf", this);
        connect(profitApi, &ProfitApi::sendPressSheetType, this, &MainApi::sendFileToShws);
        shwsApi = new ShwsApi(this);
    }
    else if (userName.toUpper() == "DEMOJSON" && password.toUpper() == "DEMOJSON")
    {
        profitApi = new ProfitApiFile(cnfgHolder->pathFileJson(), "json", this);
        connect(profitApi, &ProfitApi::sendPressSheetType, this, &MainApi::sendFileToShws);
        shwsApi = new ShwsApi(this);
    }
    else
    {
        profitApi = new ProfitApi(this);
        shwsApi = new ShwsApi(this);
    }

//    connect(profitApi, &ProfitApi::sendAuthentificationStatus, this, &MainApi::authentificate);
//    connect(profitApi, &ProfitApi::statusErrorQuery, this, &MainApi::statusError);
    connect(profitApi, &ProfitApi::sendPressSheetTemplateToShws, shwsApi, &ShwsApi::queryCreateCuttingCourse);
//    connect(shwsApi, &ShwsApi::statusErrorQuery, this, &MainApi::statusError);

//    profitApi->setClientName(cnfgHolder->realName());
//    profitApi->setHost(cnfgHolder->hostProfit());
//    profitApi->setScheme(cnfgHolder->schemeProfit());
//    profitApi->setUserName(cnfgHolder->username());
//    profitApi->setPassword(cnfgHolder->password());
    cntx->setContextProperty("ProfitApi",profitApi);

    cnfgHolder->setUsernameShws("DEVELOPER");//todo delete
    cnfgHolder->setPasswordShws("123456");//todo delete

//    shwsApi->setHost(cnfgHolder->hostShws());
//    shwsApi->setScheme(cnfgHolder->schemeShws());
//    shwsApi->setUserName(cnfgHolder->usernameShws());
//    shwsApi->setPassword(cnfgHolder->passwordShws());
    cntx->setContextProperty("ShwsApi",shwsApi);

    profitApi->queryAuthorization();//Should be the last
    shwsApi->queryWakeUpShws();
}

void MainApi::sendFileToShws(const QString &nameFile)
{
    QString pathFile;
    if (nameFile.indexOf(".jdf") != -1)
    {
        pathFile = cnfgHolder->pathFileJdf();
    }
    else if (nameFile.indexOf(".json") != -1)
    {
        pathFile = cnfgHolder->pathFileJson();
    }
    else
    {
        statusError("Unknown file type");
    }

    QFile file(pathFile + "/" + nameFile);
    if (file.open(QIODevice::ReadOnly))
    {
        auto byteArray = file.readAll();
        shwsApi->queryCreateCuttingCourse(byteArray);
    }
}

void MainApi::loadCutCoursesFromDb()
{
//    ccs = ccDb->selectCuttingCourses();

//    QList<QObject*> dataList;
//    for(auto cc : ccs)
//    {
//        dataList.append(cc);
//    }

//    cntx->setContextProperty("cuttingCourses",QVariant::fromValue(dataList));
}

void MainApi::loadCutterProgram()
{
#ifndef Q_OS_ANDROID
    quint16 startRegister;
    qDebug()<<"MainApi::loadCutterProgram-"<<cnfgHolder->stationType();
    if (cnfgHolder->stationType() == "CUTTING-VT2")
    {
        startRegister = m_regVt2;//Vt2
    }
    else if (cnfgHolder->stationType() == "CUTTING-VT3")
    {
        startRegister = m_regVt3;//Vt3
    }
    else
    {
        emit statusError("Wrong station type is chosen.");
    }
    cutterApi->loadCutterProgram(shwsApi->getCutPositionList(), startRegister);
#endif
}

void MainApi::deleteObjectList(QList<QObject *> &objectList)
{
    for (auto *object : objectList)
    {
        delete object;
    }
    objectList.clear();
}

void MainApi::logWrite(QString message)
{
    if(!message.isEmpty())
    {
        message.prepend(QDateTime::currentDateTime().toString("[MM.dd.yyyy hh:mm:ss] - "));
        message.append("\r\n");

        QString dirLog;

#ifdef Q_OS_WIN
        dirLog = QGuiApplication::applicationDirPath();
#endif

#ifdef Q_OS_LINUX
        dirLog = "/tmp";
#endif

        QDir().mkpath(QString("%1/LogDataCuttingStation/%2/%3").arg(dirLog).arg((QDateTime::currentDateTime().toString("yyyy")))
                      .arg((QDateTime::currentDateTime().toString("MM"))));

        QFile file(QString("%1/LogDataCuttingStation/%2/%3/CuttingStation_%4.log").arg(dirLog)
                   .arg((QDateTime::currentDateTime().toString("yyyy"))).arg((QDateTime::currentDateTime().toString("MM")))
                   .arg((QDateTime::currentDateTime().toString("MM_dd_yyyy"))));
        if(!file.open(QIODevice::Append)) return;
        file.write(message.toLocal8Bit());
        file.close();
    }
}

void MainApi::logWriteError(QString message)
{
    if(!message.isEmpty())
    {
        logWrite(message.prepend("Error - "));
    }
}

void MainApi::showNextStep()
{
   qDebug() << "MainApi::showNextStep->nextStep signal";
    emit nextStep();
}

void MainApi::loadChosenCutCourseFromDb()
{
//    cc = ccDb->selectChosenCuttingCourse();

//    QList<QObject*> dataList;
//    dataList.append(cc);
//    cntx->setContextProperty("cuttingCourse",QVariant::fromValue(dataList));
}

void MainApi::authentificate(const int status)
{
    switch (status)
    {
    case 200:
        logWrite(cnfgHolder->username() + ".Successfully logged in.");
        emit loggedIn();
        break;
    }
}

void MainApi::logOut()
{
    cnfgHolder->setUsername("");
    cnfgHolder->setPassword("");
    emit loggedOut();
    logWrite("loggedOut");
}

QString MainApi::getUserName() const
{
    return cnfgHolder->username();
}
