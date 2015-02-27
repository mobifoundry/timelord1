#include "shwsapimockdata.h"

ShwsApiMockData::ShwsApiMockData(QObject *parent) :
    ShwsApi(parent)
{
}

void ShwsApiMockData::initStart(AbstractApiMethod *operation)
{
    connect(operation, SIGNAL(statusQuery(int)),
            this, SIGNAL(statusQuery(int)));
//    QString className = ptr_operation->metaObject()->className();
    QString nameFileQrc;
//    if (className == "CreateCuttingCourse")
//    {
//        nameFileQrc = ":/qml/CuttingStation/MockData/cuttingCourse/"
//                "cuttingCourse.json";
//    }
//    else
//    {
//        nameFileQrc = "";
//    }

//    auto byteArray = loadFileQrc(nameFileQrc);

//    ptr_operation->onResponseStatus(byteArray, 200,  QNetworkReply::NoError);
}
