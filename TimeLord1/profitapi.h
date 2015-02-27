#ifndef PROFITAPI_H
#define PROFITAPI_H

#include <QObject>

class ProfitApi : public QObject
{
    Q_OBJECT
public:
    explicit ProfitApi(QObject *parent = 0);
    ~ProfitApi();

signals:

public slots:
};

#endif // PROFITAPI_H
