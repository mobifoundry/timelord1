#include "parser.h"

Parser::Parser(QObject *parent) :
    QObject(parent)
{
}

PressSheetTemplate *Parser::parsePressSheetTemplate(const QJsonObject &jsonObject)
{

    PressSheetTemplate *pst = new PressSheetTemplate;

    pst->setId(jsonObject["id"].toString());
    pst->setVersion(jsonObject["version"].toString());
    pst->setUrl(jsonObject["url"].toString());
    pst->setEnabled(jsonObject["enabled"].toBool());
    pst->setWidth(jsonObject["width"].toDouble());
    pst->setHeight(jsonObject["height"].toDouble());

    pst->cells.clear();

    QJsonArray jsonArray = jsonObject["cells"].toArray();

    for (auto iter = jsonArray.begin(); iter!=jsonArray.end();  ++iter)
    {
        pst->cells.append(parseCell((*iter).toObject(), pst));
    }

    return pst;

}

QList<PressSheetTemplate*> Parser::parsePressSheetTemplates(const QJsonArray &jsonArray)
{
    QList<PressSheetTemplate*> psts;
    for (auto iter = jsonArray.begin(); iter!=jsonArray.end();  ++iter)
    {
        psts.append(parsePressSheetTemplate((*iter).toObject()));
    }

    return psts;
}

Cell* Parser::parseCell(const QJsonObject &jsonObject, QObject *parent)
{    
    Cell *cell = new Cell(parent);

    cell->setSignatureType(jsonObject["signature_type"].toString());
    cell->setPosition(jsonObject["position"].toDouble());
    cell->setWidth(jsonObject["width"].toDouble());
    cell->setHeight(jsonObject["height"].toDouble());
    cell->setX(jsonObject["x"].toDouble());
    cell->setRotation(jsonObject["rotation"].toDouble());
    //  -(jsonObject["bleed"].toObject())["left"].toDouble() -(jsonObject["bleed"].toObject())["right"].toDouble());
    cell->setY(jsonObject["y"].toDouble());
     //-(jsonObject["bleed"].toObject())["top"].toDouble()-(jsonObject["bleed"].toObject())["bottom"].toDouble());
    cell->setCuttingLogId(jsonObject["cuttinglogid"].toDouble());

    return cell;
}
