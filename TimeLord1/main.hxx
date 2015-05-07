#ifndef MAIN_HXX
#define MAIN_HXX
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtGui/QGuiApplication>
#include <QPageLayout>
#include "mainapi.h"
#include "timeclock.h"
//#include "qtquick2applicationviewer.h"
//#include "../tools/CustomQmlElement/elbow.h"
   QQmlApplicationEngine * engine;
   QTranslator translator;
   QString sourceFile;
   QUrl sourceUrl;
   TimeClock * jobTimeClock;
#endif // MAIN_HXX

