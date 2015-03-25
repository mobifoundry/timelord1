#include "main.hxx"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QString sourceFile;
    QUrl sourceUrl;
    {
        ConfigHolder configHolder;
        if(configHolder.isConfigFileExists())
        {
            sourceFile = "qrc:/main.qml";
        }
        else
        {
            sourceFile = "qrc:/SettingsWindow.qml";
        }
        sourceUrl = QUrl(sourceFile);

    }
    engine.load( QUrl(sourceUrl ) );
//    MainApi *mA = new MainApi(viewer.rootContext());
    return app.exec();
}
