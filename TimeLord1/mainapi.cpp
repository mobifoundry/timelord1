#include "mainapi.h"

MainApi::MainApi(QQmlContext *context, QObject *parent) :
    QObject(parent),
    cntx(context),
    cnfgHolder(new ConfigHolder("cuttingstation.conf", this)),
    profitApi(0)

{
    cntx->setContextProperty("MainApi", this);
    cntx->setContextProperty("configHolder", cnfgHolder);
    connect(this, &MainApi::statusError, this, &MainApi::logWriteError);

    cntx->setContextProperty("cuttingCourses", 0);// todo delete

    logWrite("Start program");
}

MainApi::~MainApi()
{
    delete cnfgHolder;
    logWrite("Stop program");
}

void::MainApi::logIn(QString userName, QString password)
{

    cnfgHolder->initialize();
    cnfgHolder->setUsername(userName);
    cnfgHolder->setPassword(password.toUpper());


    cntx->setContextProperty("ProfitApi",profitApi);

    cnfgHolder->setUsernameShws("DEVELOPER");//todo delete
    cnfgHolder->setPasswordShws("123456");//todo delete
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
