#include <qnavapp.h>

int main(int argc, char *argv[])
{
    QNavApp *app = new QNavApp(argc, argv);
    int result = app->exec();
    delete app;
    return result;
}
