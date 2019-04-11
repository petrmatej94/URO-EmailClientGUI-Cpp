#include "mainwindow.h"
#include "ui_settings.h"
#include "ui_compose.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Settings settings;
    Ui_Compose compose;





    w.show();

    return a.exec();
}
