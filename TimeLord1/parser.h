#ifndef PARSER_H
#define PARSER_H

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QStringList>
#include <QFileInfoList>
#include "QDateTime"
#include <QDir>
#include <QMetaProperty>

#include "presssheet.h"
#include "presssheettemplate.h"
#include "cell.h"
#include "presssheetitem.h"
#include "orderitem.h"

#include "cuttingcourse.h"
#include "step.h"
#include "cuttinglog.h"

#include "jdffileinfo.h"


class Parser : public QObject
{
    Q_OBJECT
public:
    explicit Parser(QObject *parent = 0);

    template <typename T>
#ifndef Q_OS_WIN
    auto serializeJsonToClass(const QJsonObject &jsonObject, T *t) const -> decltype(t);
#endif
    PressSheet * parsePressSheet(const QJsonObject &object) const;
    QList<PressSheet*> parsePressSheets(const QJsonArray &jsonArray) const;

    PressSheetTemplate*  parsePressSheetTemplate(const QJsonObject &jsonObject) const;
    QList<PressSheetTemplate*> parsePressSheetTemplates(const QJsonArray &jsonArray) const;

    CuttingCourse *parseCuttingCourse(const QJsonObject &jsonObjectCuttingCourse, QObject *parent = 0) const;

    Step *parseStep(const QJsonObject &jsonObject, QObject *parent = 0) const;

    CuttingLog *parseCuttingLog(const QJsonObject &jsonObject, QObject *parent = 0) const;

    Cell *parseCell(const QJsonObject &object, QObject *parent = 0) const;

    PressSheetItem *parsePressSheetItem(const QJsonObject &jsonObject) const;
    QList<PressSheetItem*> parsePressSheetItems(const QJsonArray &jsonArray) const;

    OrderItem *parseOrderItem(const QJsonObject &jsonObject) const;

    QByteArray transformPressSheetTemplate(const QJsonObject &jsonObject) const;

    QList<QObject *> readFileList(const QString &dirPath, const QString &fileType) const;

private:
    const QStringList keysPST;

    QString stringTo_ToLower(const QString &propName) const;
};

#endif // PARSER_H
