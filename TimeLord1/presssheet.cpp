#include "presssheet.h"

PressSheet::PressSheet(QObject *parent) : QObject( parent )
{

}

long long PressSheet::id() const
{
    return m_id;
}

void PressSheet::setId(const long long &id)
{
    if ( id != m_id ) {
        m_id = id;
        emit idChanged();
    }
}

QString PressSheet::url() const
{
    return m_url;
}

void PressSheet::setUrl(const QString &url)
{
    if ( url != m_url ) {
        m_url = url;
        emit urlChanged();
    }
}

QString PressSheet::generator() const
{
    return m_generator;
}

void PressSheet::setGenerator(const QString &generator)
{
    if ( generator != m_generator ) {
        m_generator = generator;
        emit generatorChanged();
    }
}

QString PressSheet::generatedAt() const
{
    return m_generatedAt;
}

void PressSheet::setGeneratedAt(const QString &generatedAt)
{
    if ( generatedAt != m_generatedAt ) {
        m_generatedAt = generatedAt;
        emit generatedAtChanged();
    }
}

QString PressSheet::status() const
{
    return m_status;
}

void PressSheet::setStatus(const QString &status)
{
    if ( status != m_status ) {
        m_status = status;
        emit statusChanged();
    }
}

bool PressSheet::slipSheet() const
{
    return m_slipSheet;
}

void PressSheet::setSlipSheet(const bool &slipSheet)
{
    if ( slipSheet != m_slipSheet ) {
        m_slipSheet = slipSheet;
        emit slipSheetChanged();
    }
}

QString PressSheet::getName() const {
    //qDebug() << "name() has been called.\n";
    return m_name;
}

void PressSheet::setName(const QString &name) {
    //qDebug() << "setName has been called.\n";
    if ( name != m_name ) {
        m_name = name;
        emit nameChanged();
    }
}

int PressSheet::quantity() const
{
    return m_quantity;
}

void PressSheet::setQuantity(const int & quantity)
{
    if ( quantity != m_quantity ) {
        m_quantity = quantity;
        emit quantityChanged();
    }
}

QString PressSheet::expires() const
{
    return m_expires;
}

void PressSheet::setExpires(const QString &expires)
{
    if ( expires != m_expires ) {
        m_expires = expires;
        emit expiresChanged();
    }
}

QString PressSheet::substrate() const
{
    return m_substrate;
}

void PressSheet::setSubstrate(const QString &substrate)
{
    if ( substrate != m_substrate ) {
        m_substrate = substrate;
        emit substrateChanged();
    }
}

QString PressSheet::type() const
{
    return m_type;
}

void PressSheet::setType(const QString &type)
{
    if ( type != m_type ) {
        m_type = type;
        emit typeChanged();
    }
}

int PressSheet::sides() const
{
    return m_sides;
}

void PressSheet::setSides(const int &sides)
{
    if ( sides != m_sides ) {
        m_sides = sides;
        emit sidesChanged();
    }
}

int PressSheet::estimatedCost() const
{
    return m_estimatedCost;
}

void PressSheet::setEstimatedCost(int estimatedCost)
{
    if ( estimatedCost != m_estimatedCost )
    {
        m_estimatedCost = estimatedCost;
        emit estimatedCostChanged();
    }
}

QStringList PressSheet::contracts() const
{
    return m_contracts;
}

void PressSheet::setContracts(const QStringList &contracts)
{
    if (contracts != m_contracts)
    {
        m_contracts = contracts;
        emit contractsChanged();
    }
}

QStringList PressSheet::workflow() const
{
    return m_workflow;
}

void PressSheet::setWorkflow(const QStringList &workflow)
{
    if (workflow != m_workflow)
    {
        m_workflow = workflow;
        emit workflowChanged();
    }
}

QVariantMap PressSheet::machines() const
{
    return m_machines;
}

void PressSheet::setMachines(const QVariantMap &machines)
{
    if (machines != m_machines)
    {
        m_machines = machines;
        emit machinesChanged();
    }
}

QVariantMap PressSheet::previews() const
{
    return m_previews;
}

void PressSheet::setPreviews(const QVariantMap &previews)
{
    if (previews != m_previews)
    {
        m_previews = previews;
        emit previewsChanged();
    }
}

QVariantMap PressSheet::uv() const
{
    return m_uv;
}

void PressSheet::setUv(const QVariantMap &uv)
{
    if (uv != m_uv)
    {
        m_uv = uv;
        emit uvChanged();
    }
}
