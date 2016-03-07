#include "qnavapp.h"
#include "logger.h"


QNavApp::QNavApp(int &argc, char **argv)
    : QGuiApplication(argc, argv)
    , qml_engine_(new QQmlEngine(this))
{
    Logger::log(QString().sprintf("qml_engine_=%p", &qml_engine_));
}
