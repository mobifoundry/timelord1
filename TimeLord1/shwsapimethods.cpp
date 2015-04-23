#include "shwsapimethods.h"

/*********************
 *WakeUpShws*
 *********************/
WakeUpShws::WakeUpShws()
{

}

void WakeUpShws::onResponseFinished(const QJsonDocument)
{

}

/*********************
 *CreateCuttingCourse*
 *********************/
CreateCuttingCourse::CreateCuttingCourse(const QByteArray &pressSheetTemplate)
{
    setPathQuery(QString("/api/CuttingCourses"));
    m_body = pressSheetTemplate;
}

void CreateCuttingCourse::onResponseFinished(const QJsonDocument jsonDocument)
{

}
