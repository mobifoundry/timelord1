#ifndef MAINAPI_H
#define MAINAPI_H

#include <QObject>
#include <QColor>
#include <QVariant>
#include <QQmlContext>
#include <QList>
#include <QJsonDocument>
#include "presssheettemplate.h"

class MainApi : public QObject
{
    Q_OBJECT
public:
    explicit MainApi(QObject *parent = 0);
    void setQMLContext(QQmlContext *context);

signals:
    void parseError(QString errorMessage);
    void sendPst(PressSheetTemplate * pstList);
    void sendCells(QVariant cells);

public slots:
    void parsePst(const QString &pstJsonString);

private:
    QQmlContext *cntx;
    PressSheetTemplate *pst;

};

#endif // MAINAPI_H
