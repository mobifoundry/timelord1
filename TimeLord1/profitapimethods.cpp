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
