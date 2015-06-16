TEMPLATE = app
QT = network qml quick sql widgets serialport
android:QT -= serialport

CONFIG += qtquickcompiler
SOURCES += main.cpp \
    timeclock.cpp \
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
    presssheet.cpp \
    presssheettemplate.cpp \
    presssheetitem.cpp \
    orderitem.cpp \
    jdffileinfo.cpp \
    shwsapi.cpp \
    shwsapimethods.cpp \
    profitapifile.cpp \
    shwsapimockdata.cpp


RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

DISTFILES += \
    translation_en.ts \
    translation_es.ts \
    translation_fi.ts \
    translation_fr.ts \
    translation_nv.ts \
    translation_sv.ts \
    translation_zh.ts

HEADERS += \
    main.hxx \
    timeclock.h \
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
    presssheet.h \
    presssheettemplate.h \
    presssheetitem.h \
    orderitem.h \
    jdffileinfo.h \
    shwsapi.h \
    shwsapimethods.h \
    profitapifile.h \
    shwsapimockdata.h

TRANSLATIONS = translation_en.ts translation_sp.ts translation_fr.ts
