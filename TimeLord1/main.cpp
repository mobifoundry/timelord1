#include "main.hxx"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;


    QString sourceFile;
    {
        ConfigHolder configHolder;
        if(configHolder.isConfigFileExists())
        {
            sourceFile = "qrc:/gui/MainView.qml";
        }
        else
        {
            sourceFile = "qrc:/gui/SettingsWindow.qml";
        }
        qWarning()<<"sourceFile:"<<sourceFile;
    }

    MainApi *mA = new MainApi(viewer.rootContext());

    mA->setObjectName("mAObject");
    QString mAObject = mA->objectName();
    qWarning()<<mAObject;
    viewer.setSource(QUrl(sourceFile));
    viewer.showFullScreen();
    return app.exec();
}
