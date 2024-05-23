#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setName(QString name);

    void setEmail(QString email);

    void setPass(QString password);

private slots:
    void on_actionSettings_triggered();

    void on_actionProfile_triggered();

    void on_actionHelp_triggered();

    void on_actionNotifications_triggered();

    void on_pushButton_clicked();



private:
    Ui::MainWindow *ui;


    //this is where tutorial created the other dialogs

    LoginDialog *loginDialog;
    RegisterDialog *registerDialog;


    //loginDialog.setModal(true);
    // loginDialog.exec();
    //Login
};
#endif // MAINWINDOW_H
