#ifndef MAINAPI_H
#define MAINAPI_H

#include <QObject>

class MainApi : public QObject
{
    Q_OBJECT
public:
    explicit MainApi(QObject *parent = 0);
    ~MainApi();

signals:

public slots:
};

#endif // MAINAPI_H
