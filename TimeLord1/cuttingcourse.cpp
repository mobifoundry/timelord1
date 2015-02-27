#include "cuttingcourse.h"

CuttingCourse::CuttingCourse(QObject *parent) :
    QObject(parent)
{
}

QString CuttingCourse::name() const
{
    return m_name;
}

void CuttingCourse::setName(const QString &name)
{
    if ( name != m_name )
    {
        m_name = name;
        emit nameChanged();
    }
}

QString CuttingCourse::program() const
{
    return m_program;
}

void CuttingCourse::setProgram(const QString &program)
{
    if ( program != m_program )
    {
        m_program = program;
        emit programChanged();
    }
}

QString CuttingCourse::lastUpdate() const
{
    return m_lastUpdate;
}

void CuttingCourse::setLastUpdate(const QString &lastUpdate)
{
    if ( lastUpdate != m_lastUpdate )
    {
        m_lastUpdate = lastUpdate;
        emit lastUpdateChanged();
    }
}

QString CuttingCourse::author() const
{
    return m_author;
}

void CuttingCourse::setAuthor(const QString &author)
{
    if ( author != m_author )
    {
        m_author = author;
        emit authorChanged();
    }
}

QString CuttingCourse::pstId() const
{
    return m_pstId;
}

void CuttingCourse::setPstId(const QString &pstId)
{
    if ( pstId != m_pstId )
    {
        m_pstId = pstId;
        emit pstIdChanged();
    }
}

QString CuttingCourse::pstVersion() const
{
    return m_pstVersion;
}

void CuttingCourse::setPstVersion(const QString &pstVersion)
{
    if ( pstVersion != m_pstVersion )
    {
        m_pstVersion = pstVersion;
        emit pstVersionChanged();
    }
}

QString CuttingCourse::generatorVersion() const
{
    return m_generatorVersion;
}

void CuttingCourse::setGeneratorVersion(const QString &generatorVersion)
{
    if ( generatorVersion != m_generatorVersion )
    {
        m_generatorVersion = generatorVersion;
        emit generatorVersionChanged();
    }
}

QString CuttingCourse::createDate() const
{
    return m_createDate;
}

void CuttingCourse::setCreateDate(const QString &createDate)
{
    m_createDate = createDate;
}

//QQmlListProperty<QObject> CuttingCourse::qmlSteps()
//{
//    return QQmlListProperty<QObject>(this, m_steps);
//}

QList<Step *> CuttingCourse::steps() const
{
    return m_steps;
}

void CuttingCourse::setSteps(const QList<Step *> &steps)
{
    if (m_steps != steps)
    {
        m_steps = steps;
        emit stepsChanged();
    }
}

