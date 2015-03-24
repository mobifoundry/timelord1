#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

#include "mainapi.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    MainApi *mA = new MainApi();

    QtQuick2ApplicationViewer viewer;
    QQmlContext *cntx = viewer.rootContext();
    mA->setQMLContext(cntx);
    cntx->setContextProperty("mainApi",mA);
    viewer.setMainQmlFile(QStringLiteral("qml/PstEditor/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
