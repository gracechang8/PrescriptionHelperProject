#include "mainwindow.h"

#include <QApplication>
//#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //first open login
    /*
    LoginDialog loginDialog;
    loginDialog.setModal(true);
    loginDialog.exec();*/


    MainWindow w;
    w.show();
    return a.exec();

    //KEEP THIS IMPORTANT
    // MainWindow w;
    // w.show();
    // return a.exec();
}
