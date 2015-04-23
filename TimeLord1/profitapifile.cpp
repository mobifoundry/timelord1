#include "profitapifile.h"

ProfitApiFile::ProfitApiFile(const QString &pathFile, const QString &fileType, QObject *parent) :
    ProfitApi(parent),
    m_pathFile(pathFile),
    m_fileType(fileType)
{

}

void ProfitApiFile::queryAuthorization()
{
 //   emit sendAuthentificationStatus(200);
}

void ProfitApiFile::queryPressSheetsList()
{

}

void ProfitApiFile::queryPressSheetTemplate(const QString &nameFile)
{
    emit sendPressSheetType(nameFile);
}

void ProfitApiFile::initStart(AbstractApiMethod *)
{

}
