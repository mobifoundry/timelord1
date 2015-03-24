#ifndef PARSER_H
#define PARSER_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QStringList>
#include <QFileInfoList>
#include "QDateTime"
#include <QDir>

#include "presssheettemplate.h"
#include "cell.h"
class Parser : public QObject
{
    Q_OBJECT
public:
    explicit Parser(QObject *parent = 0);

    PressSheetTemplate*  parsePressSheetTemplate(const QJsonObject &jsonObject);
    QList<PressSheetTemplate*> parsePressSheetTemplates(const QJsonArray &jsonArray);

    Cell *parseCell(const QJsonObject &object, QObject *parent = 0);

private:


};

#endif // PARSER_H
