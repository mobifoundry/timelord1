#include "profitapi.h"

ProfitApi::ProfitApi(QObject *parent) :
    AbstractContextApi(parent)
{

}






void ProfitApi::onSetModelPressSheetsListToQML(QList<QObject *> pressSheetsList)
{
    emit sendModelToQML(pressSheetsList);

}

/***********************
 *GetPressSheetTemplate*
 ***********************/
void ProfitApi::queryPressSheetTemplate(const QString &pressSheetType)
{
    emit sendPressSheetType(pressSheetType);

}



void ProfitApi::onSetModelPressSheetItemsListToQML(QList<QObject *> jsonObjectItemsList)
{
   m_pressSheetItemsList.append(jsonObjectItemsList);
}



void ProfitApi::onSetModelOrderItemToQML(QList<QObject *> jsonObjectOrderItemList)
{
    m_orderItemsList.append(jsonObjectOrderItemList);
}




