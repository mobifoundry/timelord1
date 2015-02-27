#ifndef PROFITAPI_H
#define PROFITAPI_H

#include "abstractcontextapi.h"
#include "profitapimethods.h"

class ProfitApi : public AbstractContextApi
{
    Q_OBJECT

public:
    explicit ProfitApi(QObject *parent = 0);

protected:
    QList<QObject *> m_pressSheetItemsList;
    QList<QObject *> m_orderItemsList;

    virtual void initStart(AbstractApiMethod *operation);

signals:
    void sendPressSheetTemplateToShws(const QByteArray &pstByteArray);
    void sendPressSheetType( const QString &pressSheetType);
    void sendModelToQML(QList<QObject*> objectList);
    void orderItemsReceived();

public slots:
    virtual void queryAuthorization();
    virtual void queryPressSheet(const long long id);
    virtual void queryPressSheetsList();
    virtual void queryPressSheetTemplate(const QString &pressSheetType);
    virtual void queryPressSheetItemsList(const int pressSheetId);
    virtual void queryOrderItem(const long long orderId, const QString orderItemId);
    virtual void queryStartCutting(const long long  pressSheetId);
    virtual void queryPauseCutting(const long long  pressSheetId);
    virtual void queryResumeCutting(const long long  pressSheetId);
    virtual void queryFinishCutting(const long long  pressSheetId);

    void clearOrderItem();

private slots:
    void onSetModelPressSheetsListToQML(QList<QObject*> pressSheetsList);
    void onSetModelPressSheetItemsListToQML(QList<QObject*> jsonObjectItemsList);
    void onSetModelOrderItemToQML(QList<QObject*> jsonObjectOrderItemList);
};

#endif // PROFITAPI_H
