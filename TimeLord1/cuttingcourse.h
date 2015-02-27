#ifndef CUTTINGCOURSE_H
#define CUTTINGCOURSE_H

#include <QObjectList>

#include "step.h"

class CuttingCourse : public QObject
{
    Q_OBJECT
public:
    explicit CuttingCourse(QObject *parent = 0);

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged )
    Q_PROPERTY(QString program READ program WRITE setProgram NOTIFY programChanged )
    Q_PROPERTY(QString lastUpdate READ lastUpdate WRITE setLastUpdate NOTIFY lastUpdateChanged )
    Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged )
    Q_PROPERTY(QString pstId READ pstId WRITE setPstId NOTIFY pstIdChanged )
    Q_PROPERTY(QString pstVersion READ pstVersion WRITE setPstVersion NOTIFY pstVersionChanged )
    Q_PROPERTY(QString generatorVersion READ generatorVersion WRITE
               setGeneratorVersion NOTIFY generatorVersionChanged )
    Q_PROPERTY(QString createDate READ createDate WRITE setCreateDate NOTIFY createDateChanged )
    //Q_PROPERTY(QQmlListProperty<QObject> steps READ qmlSteps NOTIFY stepsChanged)


    QString name() const;
    void setName(const QString &name);

    QString program() const;
    void setProgram(const QString &program);

    QString lastUpdate() const;
    void setLastUpdate(const QString &lastUpdate);

    QString author() const;
    void setAuthor(const QString &author);

    QString pstId() const;
    void setPstId(const QString &pstId);

    QString pstVersion() const;
    void setPstVersion(const QString &pstVersion);

    QString generatorVersion() const;
    void setGeneratorVersion(const QString &generatorVersion);

    QString createDate() const;
    void setCreateDate(const QString &createDate);

    //QQmlListProperty<QObject> qmlSteps();
    QList<Step *> steps() const;
    void setSteps(const QList<Step *> &steps);

signals:
    void nameChanged();
    void programChanged();
    void lastUpdateChanged();
    void authorChanged();
    void pstIdChanged();
    void pstVersionChanged();
    void generatorVersionChanged();
    void createDateChanged();
    void stepsChanged();

private:

    QString m_name;
    QString m_program;
    QString m_lastUpdate;
    QString m_author;
    QString m_pstId;
    QString m_pstVersion;
    QString m_generatorVersion;
    QString m_createDate;

    QList<Step *> m_steps;
};

#endif // CUTTINGCOURSE_H
