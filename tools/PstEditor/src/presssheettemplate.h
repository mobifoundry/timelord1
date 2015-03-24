#ifndef PRESSSHEETTEMPLATE_H
#define PRESSSHEETTEMPLATE_H

#include <QObject>
#include <QDateTime>
#include <QVector>
#include <QMap>
#include <QDebug>
#include <QQmlListProperty>

#include "cell.h"

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

    QList<Cell*> cells;

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

signals:
    void idChanged();
    void urlChanged();
    void versionChanged();
    void enabledChanged();
    void widthChanged();
    void heightChanged();

private:

    QString m_id;
    QString m_url;
    QString m_version;
    bool m_enabled;
    int m_width;
    int m_height;

};

#endif // PRESSSHEETTEMPLATE_H
