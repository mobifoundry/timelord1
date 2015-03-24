#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    textGet("GET"),
    textPost("POST")
{
    ui->setupUi(this);

    restClient = new RestClient(this);

    connect(restClient, &RestClient::responseFinished, this, &MainWindow::response);
    connect(restClient, &RestClient::responseError, this, &MainWindow::responseError);
    connect(restClient, &RestClient::responseSslErrors, this, &MainWindow::responseSslErrors);
    connect(ui->pushButtonSend, &QPushButton::clicked, this, &MainWindow::sendRequest);
    connect(ui->comboBoxMethod, &QComboBox::currentTextChanged, this, &MainWindow::methodChanged);

    ui->comboBoxMethod->addItem(textGet);
    ui->comboBoxMethod->addItem(textPost);

    ui->lineEditUserName->setText("Developer");
    ui->lineEditPassword->setText("1234567");
    ui->lineEditClientName->setText("Guillotine Cutter 1");
    ui->lineEditHost->setText("profit-qa2.printfulfillmentservices.com");
    ui->lineEditPath->setText("/api/press-sheet-templates?assignments.press_sheets");
    ui->lineEditScheme->setText("https");
}

MainWindow::~MainWindow()
{
    delete restClient;
    delete ui;
}

void MainWindow::sendRequest() const
{
    restClient->setUserName(ui->lineEditUserName->text());
    restClient->setPassword(ui->lineEditPassword->text());
    restClient->setClientName(ui->lineEditClientName->text());
    restClient->setHost(ui->lineEditHost->text());
    restClient->setScheme(ui->lineEditScheme->text());

    if (ui->comboBoxMethod->currentText() == textGet)
    {
        restClient->sendRequest(ui->lineEditPath->text(),RestClient::GetOperation);
    }
    else if (ui->comboBoxMethod->currentText() == textPost)
    {
        restClient->sendRequest(ui->lineEditPath->text(),RestClient::PostOperation,
                                  ui->textEditBodyRequest->toPlainText().toLocal8Bit());
    }

    ui->labelStatus->setStyleSheet( " color: red; " );
    ui->labelStatus->setText("Wait...");
}

void MainWindow::response(const QByteArray responseByte, const int status, QNetworkReply::NetworkError, QUrl ) const
{
    ui->textEditResponse->setText(responseByte);

    if ( status == 200 || status == 201 )
    {
        ui->labelStatus->setStyleSheet( " color: green; " );
    }
    else
    {
        ui->labelStatus->setStyleSheet( " color: red; " );
    }

    ui->labelStatus->setText(QString("Status %1").arg(status));
}

void MainWindow::methodChanged(const QString &method)
{
    if (method == textGet)
    {
        ui->labelBodyRequest->setVisible(false);
        ui->textEditBodyRequest->setVisible(false);
    }
    else if (method == textPost)
    {
        ui->labelBodyRequest->setVisible(true);
        ui->textEditBodyRequest->setVisible(true);
    }
    else
    {
        QMessageBox::critical(this, tr(""),tr("Invalid http method."));
    }
}

void MainWindow::responseError(QNetworkReply::NetworkError error)
{
    if (error == QNetworkReply::SslHandshakeFailedError)
    {
        QMessageBox::critical(this, tr(""),tr("Connection error SSL."));
    }
    else
    {
        QMessageBox::critical(this, tr(""),tr("Connection error."));
    }

}

void MainWindow::responseSslErrors()
{
    QMessageBox::critical(this, tr(""),tr("SSL connection error."));
}
