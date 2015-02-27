#ifndef CUTTINGLOG_H
#define CUTTINGLOG_H

#include <QObject>

class CuttingLog : public QObject
{
    Q_OBJECT
public:
    explicit CuttingLog(QObject *parent = 0);
    ~CuttingLog();

signals:

public slots:
};

#endif // CUTTINGLOG_H
