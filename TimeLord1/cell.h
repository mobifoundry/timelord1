#ifndef CELL_H
#define CELL_H

#include <QObject>

class Cell : public QObject
{
    Q_OBJECT
public:
    explicit Cell(QObject *parent = 0);
    Q_PROPERTY( QString signatureType READ signatureType WRITE setSignatureType NOTIFY signatureTypeChanged )
    Q_PROPERTY( int position READ position WRITE setPosition NOTIFY positionChanged )
    Q_PROPERTY( float width READ width WRITE setWidth NOTIFY widthChanged )
    Q_PROPERTY( float height READ height WRITE setHeight NOTIFY heightChanged )
    Q_PROPERTY( float x READ x WRITE setX NOTIFY xChanged )
    Q_PROPERTY( float y READ y WRITE setY NOTIFY yChanged )
    Q_PROPERTY( int rotation READ rotation WRITE setRotation NOTIFY rotationChanged )
    Q_PROPERTY( QString text READ text WRITE setText NOTIFY textChanged )

    QString signatureType() const;
    void setSignatureType(const QString &signatureType);

    int position() const;
    void setPosition(const int position);

    float width() const;
    void setWidth(const float width);

    float height() const;
    void setHeight(const float height);

    float x() const;
    void setX(const float x);

    float y() const;
    void setY(const float y);

    int rotation() const;
    void setRotation(const int rotation);

    QString text() const;
    void setText(const QString &text);

private:

    QString m_signatureType;
    int m_position;
    float m_width;
    float m_height;
    float m_x;
    float m_y;
    int m_rotation;
    QString m_text;

signals:

    void signatureTypeChanged();
    void positionChanged();
    void widthChanged();
    void heightChanged();
    void xChanged();
    void yChanged();
    void rotationChanged();
    void textChanged();
};

#endif // CELL_H
