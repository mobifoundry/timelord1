#ifndef SHWSAPIMOCKDATA_H
#define SHWSAPIMOCKDATA_H

#include "shwsapi.h"

class ShwsApiMockData : public ShwsApi
{
    Q_OBJECT
public:
    explicit ShwsApiMockData(QObject *parent = 0);

private:
    void initStart(AbstractApiMethod *operation);

};

#endif // SHWSAPIMOCKDATA_H
