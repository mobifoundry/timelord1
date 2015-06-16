#ifndef MAINAPI_H
#define MAINAPI_H

#include <QObject>
#include <QQmlContext>
#include <QList>
#include <QJsonDocument>
#include <QFile>

#include "profitapi.h"
#include "cuttingcourse.h"
#include "shwsapi.h"
#include "configholder.h"
#include "cuttingcoursedatabase.h"
#include "profitapifile.h"
#include "shwsapimockdata.h"


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
     void logWrite(QString message);
    void logWriteError(QString message);

    void showNextStep();

private:
   CuttingCourse *cc;
    QList<CuttingCourse*> ccs;
    QQmlContext *cntx;
    ConfigHolder *cnfgHolder;
    CuttingCourseDatabase *ccDb;
   ProfitApi *profitApi;
   ShwsApi *shwsApi;

};

#endif // MAINAPI_H
