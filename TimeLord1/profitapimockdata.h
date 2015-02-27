#ifndef PROFITAPIMOCKDATA_H
#define PROFITAPIMOCKDATA_H

#include "profitapi.h"

class ProfitApiMockData : public ProfitApi
{
    Q_OBJECT
public:
    explicit ProfitApiMockData(QObject *parent = 0);

private:
    void initStart(AbstractApiMethod *operation);
};

#endif // PROFITAPIMOCKDATA_H
