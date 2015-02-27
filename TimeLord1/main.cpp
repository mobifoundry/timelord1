#include "main.hxx"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QString sourceFile;
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
    }
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//    MainApi *mA = new MainApi(viewer.rootContext());
    return app.exec();
}
