#ifndef CUTTINGCOURSE_H
#define CUTTINGCOURSE_H

#include <QObject>

class CuttingCourse : public QObject
{
    Q_OBJECT
public:
    explicit CuttingCourse(QObject *parent = 0);
    ~CuttingCourse();

signals:

public slots:
};

#endif // CUTTINGCOURSE_H
