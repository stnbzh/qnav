#include <QGuiApplication>


class QNavApp: public QGuiApplication
{
    Q_OBJECT

public:
    QNavApp(int &argc, char **argv);
};
