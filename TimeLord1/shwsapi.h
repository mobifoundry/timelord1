#ifndef SHWSAPI_H
#define SHWSAPI_H

#include <QList>
#include "cuttinglog.h"

#include "abstractcontextapi.h"
#include "shwsapimethods.h"

class ShwsApi : public AbstractContextApi
{
    Q_OBJECT
public:
    explicit ShwsApi(QObject *parent = 0);

    void createCcFile(const CuttingCourse *cutCourse) const;

    QList <quint32> getCutPositionList() const;

    void createProgramVt2File(const CuttingCourse *cutCourse) const;
    void createProgramVt3File(const CuttingCourse *cutCourse) const;

protected:
    virtual void initStart(AbstractApiMethod *operation);

private:
    QPointer<CuttingCourse> m_cutCourse;
    QList<PutAsideCuttingLog*> m_putAsideLogs;
    QList<FinishedCuttingLog*> m_finishedLogs;

private slots:
    void onSendCuttingCourseToQml(CuttingCourse *cutCourse);
    void preprocessCuttingCourse();

public slots:
    void queryWakeUpShws();
    void queryCuttingCoursesList(const QString &id, const QString &version);
    void queryCuttingCourse(const QString &id, const QString &version, const QString &generatorVersion);
    void queryCreateCuttingCourse(const QByteArray &pressSheetTemplate);
    void queryCuttingCourseFeedback(const QString &id, const QString &version, const QString &generatorVersion);

    void getCuttingCourse();
    void getCuttingLogsOfStep(int stepNumber);
    void getCellsOfCuttingLog(int stepNumber, int logNumber);

    void getPutAsideLogsOfStep(int stepNumber);
    void getFinishedLogsOfStep(int stepNumber);


signals:
    void sendCutCourseToQML(QList<QObject*> steps, QList<QObject*> firstCutLog);
    void sendCutLogsToQml(QList<QObject*> cutLogs);
    void sendCellsToQml(QList<QObject*> cells, int logNumber);

    void sendPutAsideLogsToQml(QList<QObject*> cutLogs);
    void sendFinishedLogsToQml(QList<QObject*> cutLogs);

};

#endif // SHWSAPI_H
