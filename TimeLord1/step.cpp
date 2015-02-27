#include "step.h"

Step::Step(QObject *parent) :
    QObject(parent)
{
}

int Step::rotate() const
{
    return m_rotate;
}

void Step::setRotate(int rotate)
{
    m_rotate = rotate;
}

float Step::cutPosition() const
{
    return m_cutPosition;
}

void Step::setCutPosition(float cutPosition)
{
    m_cutPosition = cutPosition;
}

float Step::cutLength() const
{
    return m_cutLength;
}

void Step::setCutLength(float cutLength)
{
    m_cutLength = cutLength;
}

bool Step::waste() const
{
    return m_waste;
}

void Step::setWaste(bool waste)
{
    m_waste = waste;
}

QStringList Step::outLogNames() const
{
    return m_outLogNames;
}

void Step::setOutLogNames(const QStringList &outLogNames)
{
    if (m_outLogNames != outLogNames) {
        m_outLogNames = outLogNames;
        emit outLogNamesChanged();
    }
}

QStringList Step::putLogNames() const
{
    return m_putLogNames;
}

void Step::setPutLogNames(const QStringList &putLogNames)
{
    if (m_putLogNames != putLogNames) {
        m_putLogNames = putLogNames;
        emit putLogNamesChanged();
    }
}

int Step::finished() const
{
    return m_finished;
}

void Step::setFinished(int finished)
{
    m_finished = finished;
}

//QQmlListProperty<QObject> Step::qmlCuttingLogs()
//{
//    return QQmlListProperty<QObject>(this, m_cuttingLogs);
//}

QList<CuttingLog *> Step::cuttingLogs() const
{
    return m_cuttingLogs;
}

void Step::setCuttingLogs(const QList<CuttingLog *> &cuttingLogs)
{
    m_cuttingLogs = cuttingLogs;
}

