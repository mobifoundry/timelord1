#ifndef SHWSAPIMETHODS_H
#define SHWSAPIMETHODS_H

#include "abstractapimethod.h"
#include "cuttingcourse.h"

/*********************
 *WakeUpShws*
 *********************/
class WakeUpShws : public AbstractApiMethod
{
    Q_OBJECT

public:
    WakeUpShws();

protected slots:
    void onResponseFinished(const QJsonDocument jsonDocument);
};

/*********************
 *CreateCuttingCourse*
 *********************/
class CreateCuttingCourse : public AbstractApiMethod
{
    Q_OBJECT

public:
    CreateCuttingCourse(const QByteArray &pressSheetTemplate);

protected slots:
    void onResponseFinished(const QJsonDocument jsonDocument);

signals:
    void sendCuttingCourseToQml(CuttingCourse* cutCourseList);
};

#endif // SHWSAPIMETHODS_H
