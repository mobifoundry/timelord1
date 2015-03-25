#include "parser.h"
#include "QDebug"
#ifndef Q_OS_WIN
Parser::Parser(QObject *parent) :
    QObject(parent),
    keysPST{"id","width","height","cells"}
{
}

template <typename T>
auto Parser::serializeJsonToClass( const QJsonObject &jsonObject, T *t) const -> decltype(t)
{
    for (auto i = t->metaObject()->propertyCount() - 1; i != 0; --i)
    {
        auto propName = t->metaObject()->property(i).name();
        auto propNameToLower = QString(propName).toLower();
        auto propNameTo_ToLower = stringTo_ToLower(propName);
        QString name = "";


        if (!jsonObject[propNameToLower].isUndefined())
        {
            name = propNameToLower;
        }
        else if (!jsonObject[propNameTo_ToLower].isUndefined())
        {
            name = propNameTo_ToLower;
        }

        if (!name.isEmpty())
        {
            if (jsonObject[name].isArray())
            {
                if (jsonObject[name].toArray().first().isObject())
                {
                    //t->setProperty(propName, jsonObject[name].toArray().toVariantList());// todo parse object to class
                }
                else
                {
                    auto jsonArray = (jsonObject[name]).toArray();
                    QStringList stringList;
                    for (auto iter : jsonArray)
                    {
                        stringList.append(iter.toString());
                    }
                    t->setProperty(propName, stringList);
                }
            }
            else if (jsonObject[name].isObject())
            {
                t->setProperty(propName, jsonObject[name].toObject().toVariantMap());
            }
            else
            {
                t->setProperty(propName, jsonObject[name]);
            }
        }
    }
    return t;
}
#endif
QString Parser::stringTo_ToLower(const QString &propName) const
{
    QString propNameTo_ToLower;
    for (auto symbol : QString(propName))
    {
        if (symbol >= 'A' && symbol <= 'Z')
        {
            propNameTo_ToLower = propNameTo_ToLower.append("_").append(symbol).toLower();
        }
        else
        {
            propNameTo_ToLower.append(symbol);
        }
    }
    return propNameTo_ToLower;
}
#ifndef Q_OS_WIN
PressSheet *Parser::parsePressSheet(const QJsonObject &jsonObject) const
{
    return serializeJsonToClass(jsonObject, new PressSheet());
}
#endif
QList<PressSheet *> Parser::parsePressSheets(const QJsonArray &jsonArray) const
{
    QList<PressSheet*> pss;
    for (auto iter : jsonArray)
    {
#ifndef Q_OS_WIN
        pss.append(serializeJsonToClass(iter.toObject(), new PressSheet()));  // parsePressSheet(iter.toObject()));
#endif
    }
    return pss;
}

PressSheetTemplate *Parser::parsePressSheetTemplate(const QJsonObject &jsonObject) const
{
//    auto *pst = serializeJsonToClass(jsonObject, new PressSheetTemplate());

//    QJsonArray jsonArray = jsonObject["cells"].toArray();

//    QObjectList cells;
//    for (auto iter : jsonArray)
//    {
//        cells.append(parseCell(iter.toObject(), pst));
//    }
//    pst->setCells(cells);

//    return pst;
    return nullptr;
}

QList<PressSheetTemplate *> Parser::parsePressSheetTemplates(const QJsonArray &jsonArray) const
{
    QList<PressSheetTemplate*> psts;
    for (auto iter : jsonArray)
    {
        psts.append(parsePressSheetTemplate(iter.toObject()));
    }

    return psts;
}

CuttingCourse *Parser::parseCuttingCourse(const QJsonObject &jsonObjectCuttingCourse, QObject *parent) const
{
    auto byteArrayToLower = QJsonDocument(jsonObjectCuttingCourse).toJson().toLower();
    auto jsonObjectCuttingCourseToLower = QJsonDocument::fromJson(byteArrayToLower).object();
#ifndef Q_OS_WIN
    auto *cuttingcourse = serializeJsonToClass(jsonObjectCuttingCourseToLower, new CuttingCourse(parent));

    QJsonArray stepArray = (jsonObjectCuttingCourseToLower["steps"]).toArray();
    QList<Step *> steps;
    for (auto iter : stepArray)
    {
        steps.append(parseStep(iter.toObject(), cuttingcourse));
    }
    cuttingcourse->setSteps(steps);
#endif
    CuttingCourse * cuttingcourse; // = new CuttingCourse();
    return cuttingcourse;


}

Step *Parser::parseStep(const QJsonObject &jsonObject, QObject *parent) const
{
#ifndef Q_OS_WIN
    auto *step = serializeJsonToClass(jsonObject, new Step(parent));

    QJsonArray cuttingCellsArray = (jsonObject["cuttinglogs"]).toArray();
    QList<CuttingLog *> cuttingLogs;
    for (auto iter : cuttingCellsArray)
    {
        cuttingLogs.append(parseCuttingLog(iter.toObject(), step));
    }
    step->setCuttingLogs(cuttingLogs);
#endif
    Step * step;
    return step;

}

CuttingLog *Parser::parseCuttingLog(const QJsonObject &jsonObject,  QObject *parent) const
{
#ifndef Q_OS_WIN
    auto *cuttingLog = serializeJsonToClass(jsonObject, new CuttingLog(parent));

    QJsonArray cuttingCellsArray = (jsonObject["cells"]).toArray();
    QList<QObject *> cells;
    for (auto iter : cuttingCellsArray)
    {
        cells.append(parseCell(iter.toObject(), cuttingLog));
    }
    cuttingLog->setCells(cells);
#endif
    CuttingLog * cuttingLog;
    return cuttingLog;

}

Cell *Parser::parseCell(const QJsonObject &jsonObject, QObject *parent) const
{
#ifndef Q_OS_WIN
    return serializeJsonToClass(jsonObject, new Cell(parent));
#endif
    Cell * cell;
    return cell;
}

PressSheetItem *Parser::parsePressSheetItem(const QJsonObject &jsonObject) const
{
#ifndef Q_OS_WIN
    return serializeJsonToClass(jsonObject, new PressSheetItem);
#endif
    PressSheetItem * presssheetitem;
    return presssheetitem;
}

QList<PressSheetItem *> Parser::parsePressSheetItems(const QJsonArray &jsonArray) const
{
    QList<PressSheetItem*> psis;
    for (auto iter : jsonArray)
    {
        psis.append(parsePressSheetItem(iter.toObject()));
    }

    return psis;
}

OrderItem *Parser::parseOrderItem(const QJsonObject &jsonObject) const
{
#ifndef Q_OS_WIN
    return serializeJsonToClass(jsonObject, new OrderItem);
#endif
    OrderItem * orderitem;
    return orderitem;
}

QByteArray Parser::transformPressSheetTemplate(const QJsonObject &jsonObject) const
{
    QJsonObject transformJsonObject;

    for (auto key : keysPST)
    {
        transformJsonObject.insert(key, jsonObject[key]);
    }

    return QJsonDocument(transformJsonObject).toJson();
}

QList<QObject*> Parser::readFileList(const QString &dirPath, const QString &fileType) const
{
    QDir dir(dirPath);
    auto fileInfoList = dir.entryInfoList({QString("*.%1").arg(fileType)}, QDir::Files);

    QList<QObject*> jdfFileInfoList;

    for (auto file : fileInfoList)
    {
        auto *jdfFileInfo = new JdfFileInfo();
        jdfFileInfo->setNameFile(file.fileName());
        jdfFileInfo->setSize(file.size());
        jdfFileInfo->setLastModified(file.lastModified().toString("dd.MM.yyyy - hh:mm"));
        jdfFileInfo->setAbsoluteFilePath(file.absoluteFilePath());
        jdfFileInfoList.append(jdfFileInfo);
    }
    return jdfFileInfoList;
}
