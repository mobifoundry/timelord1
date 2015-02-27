#include "shwsapi.h"

ShwsApi::ShwsApi(QObject *parent) :
    AbstractContextApi(parent)
{
}

void ShwsApi::initStart(AbstractApiMethod *operation)
{
//    connect(operation, &AbstractApiMethod::statusQuery, this, &ShwsApi::statusQuery);
//    connect(operation, &AbstractApiMethod::statusErrorQuery, this, &ShwsApi::statusErrorQuery);

//    operation->setClientName(clientName());
//    operation->setHost(host());
//    operation->setScheme(scheme());
//    operation->setUserName(userName());
//    operation->setPassword(password());
    operation->setAuthenticationMethod(AbstractApiMethod::BASIC);

//    start(operation);
}

/*********************
 *WakeUpShws*
 *********************/
void ShwsApi::queryWakeUpShws()
{
//    ptr_operation = new WakeUpShws();
//    initStart(ptr_operation);
//    disconnect(ptr_operation, &AbstractApiMethod::statusErrorQuery, this, &ShwsApi::statusErrorQuery);
//    disconnect(ptr_operation, &AbstractApiMethod::statusQuery, this, &ShwsApi::statusQuery);
}

/*********************
 *GetCuttingCourseList*
 *********************/
void ShwsApi::queryCuttingCoursesList(const QString &, const QString &)
{

}

/*********************
 *GetCuttingCourse*
 *********************/
void ShwsApi::queryCuttingCourse(const QString &, const QString &, const QString &)
{

}

/*********************
 *CreateCuttingCourse*
 *********************/
void ShwsApi::queryCreateCuttingCourse(const QByteArray &pressSheetTemplate)
{
//    ptr_operation = new CreateCuttingCourse(pressSheetTemplate);
//    connect(ptr_operation, SIGNAL(sendCuttingCourseToQml(CuttingCourse*)),
//            this, SLOT(onSendCuttingCourseToQml(CuttingCourse*)));
//    initStart(ptr_operation);
}

void ShwsApi::onSendCuttingCourseToQml(CuttingCourse* cutCourse)
{
    if (!m_cutCourse.isNull()) delete m_cutCourse;
    m_cutCourse = cutCourse;

    getCuttingCourse();
}

void ShwsApi::preprocessCuttingCourse()
{

}

/**************************
 *GetCuttingCourseFeedback*
 **************************/
void ShwsApi::queryCuttingCourseFeedback(const QString &, const QString &, const QString &)
{

}

void ShwsApi::getCuttingCourse()
{
    //all the steps of the cutcourse
    QList<QObject*> steps;
    //TODO: replace list with one object
    //the first log of the first step
    QList<QObject*> firstCutLog;

    if (m_cutCourse->steps().size() > 0)
    {
        for (auto step : m_cutCourse->steps())
        {
            steps.append(step);
        }
        if (m_cutCourse->steps().at(0)->cuttingLogs().size() > 0)
        {
            firstCutLog.append(m_cutCourse->steps().at(0)->cuttingLogs().at(0));
        }
    }

    createCcFile(m_cutCourse);

    emit sendCutCourseToQML(steps, firstCutLog);
}

void ShwsApi::getCuttingLogsOfStep(int stepNumber)
{
    QList<QObject *> cutLogs;

    if (m_cutCourse->steps().size() > stepNumber)
    {
        for (auto cutLog : m_cutCourse->steps().at(stepNumber)->cuttingLogs())
        {
            cutLogs.append(cutLog);
        }
    }

    //qDebug() << m_cutCourse->steps.at(stepNumber)->cuttingLogs.at(0)->x();
    emit sendCutLogsToQml(cutLogs);
}

void ShwsApi::getCellsOfCuttingLog(int stepNumber, int logNumber)
{
    QList<CuttingLog *> cutLogs;

    if (m_cutCourse->steps().size() > stepNumber)
    {
        for (auto cutLog : m_cutCourse->steps().at(stepNumber)->cuttingLogs())
        {
            cutLogs.append(cutLog);

        }
    }

    QList<QObject *> cells;

    if (cutLogs.size() > logNumber)
    {
        for (auto cell : cutLogs.at(logNumber)->cells())
        {
            cells.append(cell);
        }
    }

    emit sendCellsToQml(cells, logNumber);
}

void ShwsApi::getPutAsideLogsOfStep(int stepNumber)
{
    QList<QObject *> putAsideCutLogs;

    for (auto putAsideCutLog : m_putAsideLogs)
    {
        putAsideCutLogs.append(putAsideCutLog);
    }

    emit sendPutAsideLogsToQml(putAsideCutLogs);
}

void ShwsApi::getFinishedLogsOfStep(int stepNumber)
{
    QList<QObject *> finishedCutLogs;

    for (auto finishedCutLog : m_finishedLogs)
    {
        finishedCutLogs.append(finishedCutLog);
    }

    emit sendFinishedLogsToQml(finishedCutLogs);
}

void ShwsApi::createCcFile(const CuttingCourse *cutCourse) const
{
    QFile file(QString("cutCourse%1.cc").arg(cutCourse->pstId()));
    file.open(QIODevice::WriteOnly);

    QString string;

    for (auto step : cutCourse->steps())
    {
        string.append(QString("%1\r\n0\r\n0\r\n1\r\n")
                   .arg(static_cast<quint32>(step->cutPosition() * 1000)).toLocal8Bit());
    }
    file.write(string.toLocal8Bit());
    file.close();
}

QList<quint32> ShwsApi::getCutPositionList() const
{
    QList <quint32> arrayCutPosition;

    for (auto step : m_cutCourse->steps())
    {
        arrayCutPosition.append(static_cast<quint32>(step->cutPosition() * 1000));
    }

    return arrayCutPosition;
}
