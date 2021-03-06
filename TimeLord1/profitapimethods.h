#ifndef PROFITAPIMETHODS_H
#define PROFITAPIMETHODS_H

#include "QJsonParseError"
#include "QJsonDocument"


#include "abstractapimethod.h"

/*********************
 *AuthorizationProfit*
 *********************/
class AuthorizationProfit : public AbstractApiMethod
{
    Q_OBJECT

public:
    AuthorizationProfit(const QString userName);

private slots:

};

/***************
 *GetPressSheet*
 ***************/
class GetPressSheet : public AbstractApiMethod
{
    Q_OBJECT
public:
    GetPressSheet(const int id);

private slots:

signals:
    void setModelPressSheetsListToQML(QList<QObject*> objectList);
};

/********************
 *GetPressSheetsList*
 ********************/
class GetPressSheetsList : public AbstractApiMethod
{
    Q_OBJECT
public:
    GetPressSheetsList();

private slots:


signals:
    void setModelPressSheetsListToQML(QList<QObject*> objectList);
};

/***********************
 *GetPressSheetTemplate*
 ***********************/
class GetPressSheetTemplate : public AbstractApiMethod
{
    Q_OBJECT
public:
    GetPressSheetTemplate(const QString pressSheetType);

private slots:


signals:
    void setModelPressSheetTemplateToQML(const QByteArray pstByteArray);
};

/***********************
 *GetPressSheetItemsList*
 ***********************/
class GetPressSheetItemsList : public AbstractApiMethod
{
    Q_OBJECT
public:
    GetPressSheetItemsList(const long long  pressSheetId);

private slots:

signals:
    void setModelPressSheetItemsListToQML(QList<QObject*> jsonObjectList);
    void queryOrderItem(const long long orderId, const QString orderItemId);
};

/***********************
 *GetOrderItem         *
 ***********************/
class GetOrderItem : public AbstractApiMethod
{
    Q_OBJECT
public:
    GetOrderItem(const long long orderId, const QString orderItemId);

protected:


signals:
    void setModelOrderItemToQML(QList<QObject*> jsonObjectList);
};

/***********************
 *SetStatusWorkflow    *
 ***********************/
class SetStatusWorkflow : public AbstractApiMethod
{
    Q_OBJECT

public:
    enum StatusWorkflow {
        StartCutting = 1,
        PauseCutting,
        ResumeCutting,
        StopCutting
    };

    SetStatusWorkflow(const long long  pressSheetId, StatusWorkflow statusCutting);


signals:
    void setModelOrderItemToQML(QList<QObject*> jsonObjectList);
};


#endif // PROFITAPIMETHODS_H
