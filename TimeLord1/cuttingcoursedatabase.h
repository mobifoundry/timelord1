#ifndef CUTTINGCOURSEDATABASE_H
#define CUTTINGCOURSEDATABASE_H

#include <QObject>
#include <QList>
#include <QtSql>
#include <QGuiApplication>

#include "cuttingcourse.h"

class CuttingCourseDatabase : public QObject
{
    Q_OBJECT
public:
    explicit CuttingCourseDatabase(QObject *parent = 0);

    void openDatabase();
    void createDatabase();
    CuttingCourse *getCuttingCourseFromQuery(QSqlQuery query);
    CuttingCourse *selectChosenCuttingCourse();
    QList<CuttingCourse *> selectCuttingCourses();

signals:
    void statusErrorDb(QString errorDb);

};

#endif // CUTTINGCOURSEDATABASE_H
