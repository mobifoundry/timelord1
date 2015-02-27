#include "profitapimockdata.h"

ProfitApiMockData::ProfitApiMockData(QObject *parent) :
    ProfitApi(parent)
{

}

void ProfitApiMockData::initStart(AbstractApiMethod *operation)
{
    connect(operation, SIGNAL(statusQuery(int)),
            this, SIGNAL(statusQuery(int)));
    // QString className = ptr_operation->metaObject()->className();
    QString nameFileQrc;
 //   if (className == "AuthorizationProfit")
//    {
//        nameFileQrc = "";
//    }
//    else if (className == "GetPressSheetsList")
//    {
//        nameFileQrc = ":/qml/CuttingStation/MockData/pressSheetList/pressSheetList.json";
//    }
//    else if (className == "GetPressSheetTemplate")
//    {
//        nameFileQrc = ":/qml/CuttingStation/MockData/pressSheetTemplate/pressSheetTemplate.json" ;
//    }

//    auto byteArray = loadFileQrc(nameFileQrc);

//    ptr_operation->onResponseStatus(byteArray, 200, QNetworkReply::NoError);
}
