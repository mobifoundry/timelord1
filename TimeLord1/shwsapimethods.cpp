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
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    auto cuttingCourse = parser.parseCuttingCourse(jsonDocument.object());

    QFile file(QString("cutCourse.json"));
                    file.open(QIODevice::WriteOnly);
                    file.write(jsonDocument.toJson());
                    file.close();

    emit sendCuttingCourseToQml(cuttingCourse);
#endif
#endif
}
