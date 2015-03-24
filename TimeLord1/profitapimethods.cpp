#include "profitapimethods.h"
#include "QFile"
#include "QDir"
#include "QGuiApplication"

/*********************
 *AuthorizationProfit*
 *********************/
AuthorizationProfit::AuthorizationProfit(const QString userName)
{
    setPathQuery(QString("/api/users/username/%1").arg(userName));
}

void AuthorizationProfit::onResponseFinished(const QJsonDocument)
{

}

/***************
 *GetPressSheet*
 ***************/
GetPressSheet::GetPressSheet(const int id)
{
    setPathQuery(QString("/api/press-sheets/%1").arg(id));
}

void GetPressSheet::onResponseFinished(const QJsonDocument jsonResponse)
{
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    auto jsonObject = parser.parsePressSheet(jsonResponse.object());//todo delete

    QList<QObject*> jsonObjectList;
    jsonObjectList.append(jsonObject);

    emit setModelPressSheetsListToQML(jsonObjectList);
#endif
#endif
}

/********************
 *GetPressSheetsList*
 ********************/
GetPressSheetsList::GetPressSheetsList()
{
    setPathQuery("/api/press-sheets?workflow=is+ready+for:cutting,in+progress:cutting,suspended:cutting");
}

void GetPressSheetsList::onResponseFinished(const QJsonDocument jsonResponse)
{
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    auto pss = parser.parsePressSheets(jsonResponse.array());

    QList<QObject*> jsonObjectList;

    for (auto i = 0; i < pss.size(); ++i)
    {
        jsonObjectList.append(pss.at(i));

    }

    emit setModelPressSheetsListToQML(jsonObjectList);
#endif
#endif
}

/***********************
 *GetPressSheetTemplate*
 ***********************/
GetPressSheetTemplate::GetPressSheetTemplate(const QString pressSheetType)
{
    setPathQuery(QString("/api/press-sheet-templates?assignments."
                         "press_sheet_type=%1").arg(pressSheetType));
}

void GetPressSheetTemplate::onResponseFinished(const QJsonDocument jsonResponse)
{
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    QJsonObject jsonObjectPressSheetTemplate;
    if (jsonResponse.array().size() > 0)
    {
        jsonObjectPressSheetTemplate = jsonResponse.array().at(0).toObject();
    }

    auto pstByteArray = parser.transformPressSheetTemplate(jsonObjectPressSheetTemplate);

    QFile file(QString("Template.json"));
                    file.open(QIODevice::WriteOnly);
                    file.write(pstByteArray);
                    file.close();
    emit setModelPressSheetTemplateToQML(pstByteArray);
#endif
#endif
}

/***********************
 *GetPressSheetItemsList*
 ***********************/
GetPressSheetItemsList::GetPressSheetItemsList(const long long pressSheetId)
{
    setPathQuery(QString("/api/press-sheets/%1/positions").arg(pressSheetId));
}

void GetPressSheetItemsList::onResponseFinished(const QJsonDocument jsonResponse)
{
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    auto psis = parser.parsePressSheetItems(jsonResponse.array());

    QList<QObject*> jsonObjectList;

    for (auto i = 0; i < psis.size(); ++i)
    {
        jsonObjectList.append(psis.at(i));

        emit queryOrderItem(psis.at(i)->orderId(), psis.at(i)->orderItemId());
    }

    emit setModelPressSheetItemsListToQML(jsonObjectList);
#endif
#endif
}

/***********************
 *GetOrderItem         *
 ***********************/
GetOrderItem::GetOrderItem(const long long orderId, const QString orderItemId)
{
    setPathQuery(QString("/api/orders/%1/items/%2").arg(orderId).arg(orderItemId));
}

void GetOrderItem::onResponseFinished(const QJsonDocument jsonResponse)
{
#ifdef Q_OS_LINUX
#ifdef Q_OS_ANDROID
    Parser parser;
    auto jsonObject = parser.parseOrderItem(jsonResponse.object());

    QList<QObject*> jsonObjectList;
    jsonObjectList.append(jsonObject);

    emit setModelOrderItemToQML(jsonObjectList);
#endif
#endif
}

/***********************
 *SetStatusWorkflow    *
 ***********************/
SetStatusWorkflow::SetStatusWorkflow(const long long pressSheetId,  StatusWorkflow statusCutting)
{
    setPathQuery(QString("/api/press-sheets/%1/transition").arg(pressSheetId));

    QString strStatus;
    switch (statusCutting) {
    case SetStatusWorkflow::StartCutting:
        strStatus = "start";
        break;

    case SetStatusWorkflow::PauseCutting:
        strStatus = "suspend";
        break;

    case SetStatusWorkflow::ResumeCutting:
        strStatus = "resume";
        break;

    case SetStatusWorkflow::StopCutting:
        strStatus = "stop";
        break;
    }

    m_body = QString("{\n\"transition\": \"%1:cutting\",\n\"note\": null\n}").arg(strStatus).toLocal8Bit();
}

void SetStatusWorkflow::onResponseFinished(const QJsonDocument )
{

}
