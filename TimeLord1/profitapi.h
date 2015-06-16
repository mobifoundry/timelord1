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


signals:
    void sendPressSheetTemplateToShws(const QByteArray &pstByteArray);
    void sendPressSheetType( const QString &pressSheetType);
    void sendModelToQML(QList<QObject*> objectList);
    void orderItemsReceived();

public slots:

    virtual void queryPressSheetTemplate(const QString &pressSheetType);

private slots:
    void onSetModelPressSheetsListToQML(QList<QObject*> pressSheetsList);
    void onSetModelPressSheetItemsListToQML(QList<QObject*> jsonObjectItemsList);
    void onSetModelOrderItemToQML(QList<QObject*> jsonObjectOrderItemList);
};

#endif // PROFITAPI_H
