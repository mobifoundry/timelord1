#include "cuttingcoursedatabase.h"

CuttingCourseDatabase::CuttingCourseDatabase(QObject *parent) :
    QObject(parent)
{
}

void CuttingCourseDatabase::openDatabase()
{
    QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
    QString dirBase;

#ifdef Q_OS_WIN
    dirBase = QGuiApplication::applicationDirPath();
#endif

#ifdef Q_OS_LINUX
    dirBase = "/etc/CuttingStation";
#endif

    dbase.setDatabaseName(QString("%1/cuttingstation.db").arg(dirBase));

    if (!dbase.open())
    {
        statusErrorDb("Problem with openning cutting courses database");
    }
}

void CuttingCourseDatabase::createDatabase()
{
    QSqlQuery query;
    // DDL queries
    QString str = "CREATE TABLE courses ("
            "id integer PRIMARY KEY NOT NULL, "
            "name TEXT,"
            "program TEXT,"
            "lastupdate TEXT,"
            "author TEXT,"
            "pstId TEXT,"
            "pstversion TEXT,"
            "generatorversion TEXT"
            ");";
    bool b = query.exec(str);
    if (!b)
    {
        statusErrorDb("Can't create the courses table");
    }

    str = "CREATE TABLE chosenCourses ("
            "id integer PRIMARY KEY NOT NULL, "
            "pstId TEXT,"
            "chosenProgamId integer"
            ");";
    b = query.exec(str);
    if (!b)
    {
        statusErrorDb("Can't create the courses table");
    }

    for (int i=1;i<=3;i++)
    {
        // DML
        query.prepare("INSERT INTO courses(name, program, lastupdate, author, pstId,"
                      "pstversion, generatorversion) VALUES (?, ?, ?, ?, ?, ?, ?)");

        query.addBindValue("Nice program " + QString::number(i));
        query.addBindValue("1 Air On 2 Cut 34.5 3 ??? ");
        query.addBindValue("yesterday");
        query.addBindValue("John Smith");
        query.addBindValue("11.2");
        query.addBindValue("1.1.222.3");
        query.addBindValue("1.0.0");

        b = query.exec();

        if (!b)
        {
            statusErrorDb("Problems with the insertion");
        }
    }

    // DML
    query.prepare("INSERT INTO courses(name, program, lastupdate, author, pstId,"
                  "pstversion, generatorversion) VALUES (?, ?, ?, ?, ?, ?, ?)");

    query.addBindValue("Optimal program");
    query.addBindValue("1 Air On 2 Cut 34.5 3 ??? ");
    query.addBindValue("yesterday");
    query.addBindValue("SHWS");
    query.addBindValue("11.3");
    query.addBindValue("1.1.222.3");
    query.addBindValue("1.0.0");

    b = query.exec();

    if (!b)
    {
        statusErrorDb("Problems with the insertion");
    }

    // DML
    query.prepare("INSERT INTO chosenCourses(pstId,"
                  "chosenProgamId) VALUES (?, ?)");

    query.addBindValue("11.3");
    query.addBindValue(4);

    b = query.exec();

    if (!b)
    {
        statusErrorDb("Problems with the insertion");
    }

    // DML
    query.prepare("INSERT INTO chosenCourses(pstId,"
                  "chosenProgamId) VALUES (?, ?)");

    query.addBindValue("11.2");
    query.addBindValue(1);

    b = query.exec();

    if (!b)
    {
        statusErrorDb("Problems with the insertion");
    }

}

CuttingCourse *CuttingCourseDatabase::getCuttingCourseFromQuery(QSqlQuery query)
{
    CuttingCourse *cc = new CuttingCourse;
    QSqlRecord rec = query.record();

    cc->setName(query.value(rec.indexOf("name")).toString());
    cc->setProgram(query.value(rec.indexOf("program")).toString());
    cc->setLastUpdate(query.value(rec.indexOf("lastupdate")).toString());
    cc->setAuthor(query.value(rec.indexOf("author")).toString());
    cc->setPstId(query.value(rec.indexOf("pstId")).toString());
    cc->setPstVersion(query.value(rec.indexOf("pstversion")).toString());
    cc->setGeneratorVersion(query.value(rec.indexOf("generatorversion")).toString());

    return cc;
}

QList<CuttingCourse *> CuttingCourseDatabase::selectCuttingCourses()
{
    QList<CuttingCourse *> ccs;

    QSqlQuery query;
    if (!query.exec("SELECT * FROM courses"))
    {
        statusErrorDb("Problems with the selection from the database");
    }

    QSqlRecord rec = query.record();

    while (query.next())
    {
        CuttingCourse *cc = new CuttingCourse;
        cc = getCuttingCourseFromQuery(query);
        ccs.append(cc);
    }

    return ccs;

}

CuttingCourse *CuttingCourseDatabase::selectChosenCuttingCourse()
{
    CuttingCourse *cc = new CuttingCourse;

    QSqlQuery query;
    if (!query.exec("SELECT * FROM courses"))
    {
        statusErrorDb("Problems with the selection from the database");
    }

    query.next();

    cc = getCuttingCourseFromQuery(query);

    return cc;
}
