#ifndef PRESSSHEETTEMPLATE_H
#define PRESSSHEETTEMPLATE_H

#include <QQmlListProperty>
#include <QObject>
#include <QDateTime>
#include <QMap>

class PressSheetTemplate : public QObject
{
    Q_OBJECT
public:
    explicit PressSheetTemplate(QObject *parent = 0);

    Q_PROPERTY( QString id READ id WRITE setId NOTIFY idChanged )
    Q_PROPERTY( QString version READ version WRITE setVersion NOTIFY versionChanged )
    Q_PROPERTY( QString url READ url WRITE setUrl NOTIFY urlChanged )

    Q_PROPERTY( bool enabled READ enabled WRITE setEnabled NOTIFY enabledChanged )
    Q_PROPERTY( int width READ width WRITE setWidth NOTIFY widthChanged )
    Q_PROPERTY( int height READ height WRITE setHeight NOTIFY heightChanged )
    Q_PROPERTY( QQmlListProperty<QObject> cells READ qmlCells NOTIFY cellsChanged)


    QString id() const;
    void setId(const QString &id);

    QString url() const;
    void setUrl(const QString &url);

    QString version() const;
    void setVersion(const QString &version);

    bool enabled() const;
    void setEnabled(const bool &enabled);

    int width() const;
    void setWidth(const int &width);

    int height() const;
    void setHeight(const int &height);

    QQmlListProperty<QObject> qmlCells();
    QObjectList cells() const;
    void setCells(const QObjectList &cells);

signals:
    void idChanged();
    void urlChanged();
    void versionChanged();
    void enabledChanged();
    void widthChanged();
    void heightChanged();
    void cellsChanged();

private:

    QString m_id;
    QString m_url;
    QString m_version;
    bool m_enabled;
    int m_width;
    int m_height;

    QObjectList m_cells;
};

#endif // PRESSSHEETTEMPLATE_H
