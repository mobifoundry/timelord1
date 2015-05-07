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

    }

    createCcFile(m_cutCourse);

    emit sendCutCourseToQML(steps, firstCutLog);
}

void ShwsApi::getCuttingLogsOfStep(int stepNumber)
{
    QList<QObject *> cutLogs;

    if (m_cutCourse->steps().size() > stepNumber)
    {

    }

    //qDebug() << m_cutCourse->steps.at(stepNumber)->cuttingLogs.at(0)->x();
    emit sendCutLogsToQml(cutLogs);
}

void ShwsApi::getCellsOfCuttingLog(int stepNumber, int logNumber)
{
    QList<CuttingLog *> cutLogs;

    if (m_cutCourse->steps().size() > stepNumber)
    {

    }

    QList<QObject *> cells;

    if (cutLogs.size() > logNumber)
    {

    }

    emit sendCellsToQml(cells, logNumber);
}

void ShwsApi::getPutAsideLogsOfStep(int stepNumber)
{
    QList<QObject *> putAsideCutLogs;


}

void ShwsApi::getFinishedLogsOfStep(int stepNumber)
{
    QList<QObject *> finishedCutLogs;


}

void ShwsApi::createCcFile(const CuttingCourse *cutCourse) const
{
    QFile file(QString("cutCourse%1.cc").arg(cutCourse->pstId()));
    file.open(QIODevice::WriteOnly);

    QString string;


    file.write(string.toLocal8Bit());
    file.close();
}

QList<quint32> ShwsApi::getCutPositionList() const
{
    QList <quint32> arrayCutPosition;


    return arrayCutPosition;
}
