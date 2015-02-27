#ifndef ABSTRACTAPIMETHOD_H
#define ABSTRACTAPIMETHOD_H

#include <QObject>

class AbstractApiMethod : public QObject
{
    Q_OBJECT
public:
    explicit AbstractApiMethod(QObject *parent = 0);
    ~AbstractApiMethod();

signals:

public slots:
};

#endif // ABSTRACTAPIMETHOD_H
