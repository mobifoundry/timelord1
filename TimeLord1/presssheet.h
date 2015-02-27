#ifndef PRESSSHEET_H
#define PRESSSHEET_H

#include <QObject>
#include <QStringList>
#include <QDateTime>
#include <QMap>
#include <QVariantMap>

class PressSheet : public QObject
{
public:
    explicit PressSheet( QObject * parent = 0);

    Q_OBJECT

    Q_PROPERTY( long long id READ id WRITE setId NOTIFY idChanged )
    Q_PROPERTY( QString url READ url WRITE setUrl NOTIFY urlChanged )
    Q_PROPERTY( QString generator READ generator WRITE setGenerator NOTIFY generatorChanged )
    Q_PROPERTY( QString generatedAt READ generatedAt WRITE setGeneratedAt NOTIFY generatedAtChanged )
    Q_PROPERTY( QString status READ status WRITE setStatus NOTIFY statusChanged )
    Q_PROPERTY( bool slipSheet READ slipSheet WRITE setSlipSheet NOTIFY slipSheetChanged )

    Q_PROPERTY( QString name READ getName WRITE setName NOTIFY nameChanged )
    Q_PROPERTY( int quantity READ quantity WRITE setQuantity NOTIFY quantityChanged )
    Q_PROPERTY( QString expires READ expires WRITE setExpires NOTIFY expiresChanged )
    Q_PROPERTY( QString substrate READ substrate WRITE setSubstrate NOTIFY substrateChanged )
    Q_PROPERTY( QString type READ type WRITE setType NOTIFY typeChanged )
    Q_PROPERTY( int sides READ sides WRITE setSides NOTIFY sidesChanged )
    Q_PROPERTY( int estimatedCost READ estimatedCost WRITE setEstimatedCost NOTIFY estimatedCostChanged )
    Q_PROPERTY( QStringList contracts READ contracts WRITE setContracts NOTIFY contractsChanged)
    Q_PROPERTY( QStringList workflow READ workflow WRITE setWorkflow NOTIFY workflowChanged)
    Q_PROPERTY( QVariantMap machines READ machines WRITE setMachines NOTIFY machinesChanged)
    Q_PROPERTY( QVariantMap previews READ previews WRITE setPreviews NOTIFY previewsChanged)
    Q_PROPERTY( QVariantMap uv READ uv WRITE setUv NOTIFY uvChanged)

public:


    long long id() const;
    void setId(const long long &id);

    QString url() const;
    void setUrl(const QString &url);

    QString generator() const;
    void setGenerator(const QString &generator);

    QString generatedAt() const;
    void setGeneratedAt(const QString &generatedAt);

    QString status() const;
    void setStatus(const QString &status);

    bool slipSheet() const;
    void setSlipSheet(const bool &slipSheet);

    QString getName() const;
    void setName(const QString &);

    int quantity() const;
    void setQuantity(const int &quantity);

    QString expires() const;
    void setExpires(const QString &expires);

    QString substrate() const;
    void setSubstrate(const QString &substrate);

    QString type() const;
    void setType(const QString &type);

    int sides() const;
    void setSides(const int &sides);

    int estimatedCost() const;
    void setEstimatedCost(int estimatedCost);

    QStringList contracts() const;
    void setContracts(const QStringList &contracts);

    QStringList workflow() const;
    void setWorkflow(const QStringList &workflow);

    QVariantMap machines() const;
    void setMachines(const QVariantMap &machines);

    QVariantMap previews() const;
    void setPreviews(const QVariantMap &previews);

    QVariantMap uv() const;
    void setUv(const QVariantMap &uv);

signals:
    void idChanged();
    void urlChanged();
    void generatorChanged();
    void generatedAtChanged();
    void statusChanged();
    void slipSheetChanged();

    void nameChanged();
    void quantityChanged();
    void expiresChanged();
    void substrateChanged();
    void typeChanged();
    void sidesChanged();
    void estimatedCostChanged();

    void contractsChanged();
    void workflowChanged();

    void machinesChanged();
    void previewsChanged();
    void uvChanged();

private:

    long long m_id;
    QString m_url;
    int m_quantity;
    QString m_generator;
    QString m_generatedAt;
    QString m_status;
    bool m_slipSheet;

    QString m_name;

    QString m_expires;
    QString m_substrate;
    QString m_type;
    int m_sides;
    int m_estimatedCost;

    QString m_front;
    QString m_back;

    QStringList m_contracts;
    QStringList m_workflow;

    QVariantMap m_machines;
    QVariantMap m_previews;
    QVariantMap m_uv;

};

#endif // PRESSSHEET_H
