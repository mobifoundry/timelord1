#include "mainapi.h"
#include "parser.h"
#include <QFile>
#include <QDebug>

MainApi::MainApi(QObject *parent) :
    QObject(parent)
{
    //    Logger logger;
    //    logger.log("Start program");

    //    cnfgHolder = new ConfigHolder("cuttingstation.conf");
    //    cnfgHolder->initialize();

    //    CuttingCourseDatabase ccdb;
    //    ccdb.openDatabase();
    //    ccdb.createDatabase();

}

void MainApi::setQMLContext(QQmlContext *context)
{
    cntx = context;
}

void MainApi::parsePst(const QString &pstJsonString)
{

    Parser parser;

    QJsonParseError error;
    QJsonDocument document = QJsonDocument::fromJson(pstJsonString.toLocal8Bit(), &error);
//    qDebug() << document.toJson();

    if (error.error == QJsonParseError::NoError)
    {
        pst = parser.parsePressSheetTemplate(document.object());
        emit sendPst(pst);

        QList<QObject*> dataList;
        for(int i=0; i<pst->cells.size(); ++i)
        {
            dataList.append(pst->cells.at(i));
        }

        emit sendCells(QVariant::fromValue(dataList));
    }
    else
    {
        emit parseError(error.errorString());
    }

//    QFile file(QString("Template.json"));
//                    file.open(QIODevice::WriteOnly);
//                    file.write(byteArray);
//                    file.close();

}
