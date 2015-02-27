#ifndef ABSTRACTCONTEXTAPI_H
#define ABSTRACTCONTEXTAPI_H

#include <QObject>

class AbstractContextApi : public QObject
{
    Q_OBJECT
public:
    explicit AbstractContextApi(QObject *parent = 0);
    ~AbstractContextApi();

signals:

public slots:
};

#endif // ABSTRACTCONTEXTAPI_H
