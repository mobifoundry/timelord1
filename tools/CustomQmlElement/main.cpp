#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include "elbow.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    qmlRegisterType<Elbow>("lcars", 1, 0, "Elbow");
    viewer.setMainQmlFile(QStringLiteral("qml/customQmlElement/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
