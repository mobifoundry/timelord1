#include "shwsapi.h"

ShwsApi::ShwsApi(QObject *parent) :
    AbstractContextApi(parent)
{
}

void ShwsApi::initStart(AbstractApiMethod *operation)
{

    operation->setAuthenticationMethod(AbstractApiMethod::BASIC);

}


/*********************
 *GetCuttingCourseList*
 *********************/
void ShwsApi::queryCuttingCoursesList(const QString &, const QString &)
{

}

void ShwsApi::onSendCuttingCourseToQml(CuttingCourse* cutCourse)
{
    if (!m_cutCourse.isNull()) delete m_cutCourse;
    m_cutCourse = cutCourse;

    getCuttingCourse();
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
