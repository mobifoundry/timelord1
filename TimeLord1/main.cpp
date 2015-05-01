#include "main.hxx"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    engine = new QQmlApplicationEngine();
    QPageLayout appWindow;
    appWindow.setOrientation(QPageLayout::Landscape);
    translator.load("translation_en.ts");
    app.installTranslator(&translator);
    sourceFile = "qrc:/main.qml";
    sourceUrl = QUrl(sourceFile);
    engine->load( QUrl(sourceUrl ) );
    MainApi *mA = new MainApi(viewer.rootContext());
    return app.exec();
}
