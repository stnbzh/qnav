#ifndef QNAVAPP_H
#define QNAVAPP_H

#include <QGuiApplication>
#include <QQmlEngine>


class QNavApp: public QGuiApplication
{
    Q_OBJECT

public:
    QNavApp(int &argc, char **argv);

private:
    QQmlEngine *qml_engine_;
};

#endif // QNAVAPP_H
