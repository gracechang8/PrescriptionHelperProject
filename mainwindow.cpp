#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "settingsdialog.h"
#include "profiledialog.h"
#include "managedialog.h"
#include "logindialog.h"
#include "registerdialog.h"


QString userName;
QString userEmail;
QString userPassword;

//static MainWindow *theWindow;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //theWindow = this;


    loginDialog = new LoginDialog(this);
    loginDialog->setModal(true);
    loginDialog->show();

    //register window


    int hasLoginBeenAccepted = loginDialog->exec();
    if (hasLoginBeenAccepted == QDialog::Accepted){

         ui->setupUi(this);
         qDebug("Login successful");
    } else if (hasLoginBeenAccepted == 5){
        // this is if they chose the register thing

        qDebug("They chose register button");

        //OPEN THE REGISTER DIALOG
        //registerDialog = new RegisterDialog(this);
        RegisterDialog* registerDialog = new RegisterDialog(this);
        registerDialog->setModal(true);
        registerDialog->show();

        int hasRegisterBeenAccepted = registerDialog->exec();
        if (hasRegisterBeenAccepted == 4){
            ui->setupUi(this);
        }



    } else {
        //delete ui;
        qDebug("Login failed");
    }

//idk if i should be using a modal or modalless approach
}

MainWindow::~MainWindow()
{
    //theWindow = nullptr;
    delete ui;
}

// static get(){
//     return theWindow;
// }

void MainWindow::on_actionSettings_triggered()
{
    qDebug("Settings clicked");

    //open settings window
    SettingsDialog settingsDialog;
    settingsDialog.setModal(true);
    settingsDialog.exec();
}


void MainWindow::on_actionProfile_triggered()
{
    qDebug("Profile clicked");
    ProfileDialog profileDialog;
    profileDialog.setModal(true);
    profileDialog.exec();

}


void MainWindow::on_actionHelp_triggered()
{
    qDebug("Help clicked");

}


void MainWindow::on_actionNotifications_triggered()
{
    qDebug("Notifs clicked");

}


void MainWindow::on_pushButton_clicked()
{
    ManageDialog manageDialog;
    manageDialog.setModal(true);
    manageDialog.exec();
}

void MainWindow::setName(QString name){
    userName = name;
}

void MainWindow::setEmail(QString email){
    userEmail = email;
}

void MainWindow::setPass(QString password){
    userPassword = password;
}
