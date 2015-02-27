TEMPLATE = app
QT = network qml quick sql widgets
# CONFIG += qtquickcompiler
SOURCES += main.cpp \
    mainapi.cpp \
    configholder.cpp \
    cuttingcoursedatabase.cpp \
    cuttingcourse.cpp \
    step.cpp \
    cuttinglog.cpp \
    cell.cpp \
    profitapi.cpp \
    abstractcontextapi.cpp \
    profitapimethods.cpp \
    abstractapimethod.cpp \
    restclient.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

DISTFILES +=

HEADERS += \
    main.hxx \
    mainapi.h \
    configholder.h \
    cuttingcoursedatabase.h \
    cuttingcourse.h \
    step.h \
    cuttinglog.h \
    cell.h \
    profitapi.h \
    abstractcontextapi.h \
    profitapimethods.h \
    abstractapimethod.h \
    restclient.h
