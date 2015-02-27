#ifndef PROFITAPIFILE_H
#define PROFITAPIFILE_H

#include "profitapi.h"
#include "parser.h"

class ProfitApiFile : public ProfitApi
{
    Q_OBJECT

public:
    explicit ProfitApiFile(const QString &pathFileFile, const QString &fileType, QObject *parent = 0);

public slots:
    virtual void queryAuthorization();
    virtual void queryPressSheetsList();
    virtual void queryPressSheetTemplate(const QString &nameFile);

private:
    void initStart(AbstractApiMethod *operation);

    const QString m_pathFile;
    const QString m_fileType;
};

#endif // PROFITAPIFILE_H
