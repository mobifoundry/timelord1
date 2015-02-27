#ifndef RESTCLIENT_H
#define RESTCLIENT_H

#include <QObject>

class RestClient : public QObject
{
    Q_OBJECT
public:
    explicit RestClient(QObject *parent = 0);
    ~RestClient();

signals:

public slots:
};

#endif // RESTCLIENT_H
