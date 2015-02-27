#ifndef PROFITAPIMETHODS_H
#define PROFITAPIMETHODS_H

#include <QObject>

class ProfitApiMethods : public QObject
{
    Q_OBJECT
public:
    explicit ProfitApiMethods(QObject *parent = 0);
    ~ProfitApiMethods();

signals:

public slots:
};

#endif // PROFITAPIMETHODS_H
