#include "profitapi.h"

ProfitApi::ProfitApi(QObject *parent) :
    AbstractContextApi(parent)
{

}

void ProfitApi::initStart(AbstractApiMethod *operation)
{
    connect(operation, &AbstractApiMethod::statusQuery, this, &ProfitApi::statusQuery);
    connect(operation, &AbstractApiMethod::statusErrorQuery, this, &ProfitApi::statusErrorQuery);

    operation->setClientName(clientName());
    operation->setHost(host());
    operation->setScheme(scheme());
    operation->setUserName(userName());
    operation->setPassword(password());
    operation->setAuthenticationMethod(AbstractApiMethod::WSSE);

    start(operation);
}

/*********************
 *AuthorizationProfit*
 *********************/
void ProfitApi::queryAuthorization()
{
    ptr_operation = new AuthorizationProfit(userName());
    connect(ptr_operation, SIGNAL(statusQuery(int)),
            this, SIGNAL(sendAuthentificationStatus(int)));
    initStart(ptr_operation);
}

/***************
 *GetPressSheet*
 ***************/
void ProfitApi::queryPressSheet(const long long id)
{
    ptr_operation = new GetPressSheet(id);
    connect(ptr_operation, SIGNAL(setModelPressSheetsListToQML(QList<QObject*>)),
            this, SLOT(onSetModelPressSheetsListToQML(QList<QObject*>)));
    initStart(ptr_operation);
}

/********************
 *GetPressSheetsList*
 ********************/
void ProfitApi::queryPressSheetsList()
{
    ptr_operation = new GetPressSheetsList();
    connect(ptr_operation, SIGNAL(setModelPressSheetsListToQML(QList<QObject*>)),
            this, SLOT(onSetModelPressSheetsListToQML(QList<QObject*>)));
    initStart(ptr_operation);
}

void ProfitApi::onSetModelPressSheetsListToQML(QList<QObject *> pressSheetsList)
{
    emit sendModelToQML(pressSheetsList);
    deleteObjectList(pressSheetsList);
}

/***********************
 *GetPressSheetTemplate*
 ***********************/
void ProfitApi::queryPressSheetTemplate(const QString &pressSheetType)
{
    emit sendPressSheetType(pressSheetType);
    ptr_operation = new GetPressSheetTemplate(pressSheetType);
    connect(ptr_operation, SIGNAL(setModelPressSheetTemplateToQML(const QByteArray)),
            this, SIGNAL(sendPressSheetTemplateToShws(const QByteArray)));
    initStart(ptr_operation);
}

/***********************
 *GetPressSheetItemsList*
 ***********************/
void ProfitApi::queryPressSheetItemsList(const int pressSheetId)
{
    ptr_operation = new GetPressSheetItemsList(pressSheetId);
    connect(ptr_operation, SIGNAL(setModelPressSheetItemsListToQML(QList<QObject*>)),
            this, SLOT(onSetModelPressSheetItemsListToQML(QList<QObject*>)));
    connect(ptr_operation, SIGNAL(queryOrderItem(const long long, const QString)),
            this, SLOT(queryOrderItem(const long long, const QString)));
    initStart(ptr_operation);
}

void ProfitApi::onSetModelPressSheetItemsListToQML(QList<QObject *> jsonObjectItemsList)
{
    clearOrderItem();
    deleteObjectList(m_pressSheetItemsList);
    m_pressSheetItemsList.append(jsonObjectItemsList);
    //To DO: replace with a sinal emitting - get rid of setContextProperty
    //cntx->setContextProperty("pressSheetItemsList", QVariant::fromValue(m_pressSheetItemsList));
}

/***********************
 *GetOrderItem         *
 ***********************/
void ProfitApi::queryOrderItem(const long long orderId, const QString orderItemId)
{
    ptr_operation = new GetOrderItem(orderId, orderItemId);
    connect(ptr_operation, SIGNAL(setModelOrderItemToQML(QList<QObject*>)),
            this, SLOT (onSetModelOrderItemToQML(QList<QObject*>)));
    initStart(ptr_operation);
}

void ProfitApi::onSetModelOrderItemToQML(QList<QObject *> jsonObjectOrderItemList)
{
    m_orderItemsList.append(jsonObjectOrderItemList);
    //To DO: replace with a sinal emitting - get rid of setContextProperty
    //cntx->setContextProperty("orderItemsList", QVariant::fromValue(m_orderItemsList));
}

void ProfitApi::clearOrderItem()
{
    deleteObjectList(m_orderItemsList);
}

/***********************
 *SetStatusWorkflow    *
 ***********************/
void ProfitApi::queryStartCutting(const long long  pressSheetId)
{
    ptr_operation = new SetStatusWorkflow(pressSheetId, SetStatusWorkflow::StartCutting);
    initStart(ptr_operation);
}

void ProfitApi::queryPauseCutting(const long long pressSheetId)
{
    ptr_operation = new SetStatusWorkflow(pressSheetId, SetStatusWorkflow::PauseCutting);
    initStart(ptr_operation);
}

void ProfitApi::queryResumeCutting(const long long pressSheetId)
{
    ptr_operation = new SetStatusWorkflow(pressSheetId, SetStatusWorkflow::ResumeCutting);
    initStart(ptr_operation);
}

void ProfitApi::queryFinishCutting(const long long pressSheetId)
{
    ptr_operation = new SetStatusWorkflow(pressSheetId, SetStatusWorkflow::StopCutting);
    initStart(ptr_operation);
}
