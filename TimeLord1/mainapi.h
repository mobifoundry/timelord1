#ifndef MAINAPI_H
#define MAINAPI_H

#include <QObject>
#include <QQmlContext>
#include <QList>
#include <QJsonDocument>
#include <QFile>

#include "profitapi.h"
#include "cuttingcourse.h"
//#include "shwsapi.h"
#include "configholder.h"
#include "cuttingcoursedatabase.h"

//#include "profitapimockdata.h"
//#include "profitapifile.h"
//#include "shwsapimockdata.h"

#ifndef Q_OS_ANDROID
#include "cutterapi.h"
#endif

class MainApi : public QObject
{
    Q_OBJECT
public:
    explicit MainApi(QQmlContext *context, QObject *parent = 0);
    ~MainApi();

signals:
    void statusError(const QString statusError);
    void loggedIn();
    void loggedOut();
    void nextStep();

public slots:
    void logIn(QString userName, QString password);
    void authentificate(const int status);
    void logOut();
    QString getUserName() const;

    void sendFileToShws(const QString &nameFile);

    void loadChosenCutCourseFromDb();
    void loadCutCoursesFromDb();

    void loadCutterProgram();

    void deleteObjectList(QList<QObject*> &objectList);

    void logWrite(QString message);
    void logWriteError(QString message);

    void showNextStep();

private:
 //   CuttingCourse *cc;
 //   QList<CuttingCourse*> ccs;
    QQmlContext *cntx;
    ConfigHolder *cnfgHolder;
    CuttingCourseDatabase *ccDb;
 //   ProfitApi *profitApi;
 //   ShwsApi *shwsApi;
#ifndef Q_OS_ANDROID
    CutterApi *cutterApi;

    const quint16 m_regVt2;
    const quint16 m_regVt3;
#endif

};

#endif // MAINAPI_H
