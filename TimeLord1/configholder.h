#ifndef CONFIGHOLDER_H
#define CONFIGHOLDER_H

#include <QObject>

class ConfigHolder : public QObject
{
    Q_OBJECT
public:
    explicit ConfigHolder(QObject *parent = 0);
    ~ConfigHolder();

signals:

public slots:
};

#endif // CONFIGHOLDER_H
