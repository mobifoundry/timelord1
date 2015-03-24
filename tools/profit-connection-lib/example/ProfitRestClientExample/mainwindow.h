#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "../../RestClientLib/restclient.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    RestClient *restClient;

    const QString textGet;
    const QString textPost;

public slots:
    void sendRequest() const;
    void response(const QByteArray responseByte, const int status, QNetworkReply::NetworkError error, QUrl url) const;
    void methodChanged(const QString &method);

    void responseError(QNetworkReply::NetworkError error);
    void responseSslErrors();

};

#endif // MAINWINDOW_H
