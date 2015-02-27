#ifndef JDFFILEINFO_H
#define JDFFILEINFO_H

#include <QObject>

class JdfFileInfo : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY( QString type READ nameFile WRITE setNameFile NOTIFY nameFileChanged )
    Q_PROPERTY( long size READ size WRITE setSize NOTIFY sizeChanged )
    Q_PROPERTY( QString substrate READ lastModified WRITE setLastModified NOTIFY lastModifiedChanged )
    Q_PROPERTY( QString absoluteFilePath READ absoluteFilePath WRITE setAbsoluteFilePath NOTIFY absoluteFilePathChanged )

    explicit JdfFileInfo(QObject *parent = 0);

    QString nameFile() const;
    void setNameFile(const QString &nameFile);

    long size() const;
    void setSize(long size);

    QString lastModified() const;
    void setLastModified(const QString &lastModified);

    QString absoluteFilePath() const;
    void setAbsoluteFilePath(const QString &absoluteFilePath);

private:
    QString m_nameFile;
    long m_size;
    QString m_lastModified;
    QString m_absoluteFilePath;

signals:
    void nameFileChanged();
    void sizeChanged();
    void lastModifiedChanged();
    void absoluteFilePathChanged();
};

#endif // JDFFILEINFO_H
