#include "logindialog.h"
#include "ui_logindialog.h"
//#include "mainwindow.h"
#include "registerdialog.h"

//idk if correct scope??
//bool correctInfo = false;


LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}


void LoginDialog::on_pushButton_clicked()
{
    //when they click the login button
    QString userEmail = ui->lineEdit->text();
    QString userPass = ui->lineEdit_2->text();

    if (userEmail == "poop@gmail.com" && userPass == "Poop!"){
    //     //log them in

         this->accept();

     } else {
         qDebug("Login failed");
        //add a pop up that says login unsuccessful
     }

}


void LoginDialog::on_pushButton_2_clicked()
{
    //when they click the register button
    //should take them to another window where they can input their info and it should save it
    //maybe when you create this new dialog, pass in a ptr to the mainwindow so that mainwindow is its parent?
    //maybe when you click this button, it sends a signal to mainwindow, then mainwindow makes the dialog
    /*
    RegisterDialog registerDialog;
    //registerDialog = new RegisterDialog(MainWindow* mainWindow);
    registerDialog.setModal(true);
    registerDialog.exec();
*/
    //maybe i should use the reject thing from logindialog to send the signal?
    this->done(5);

}



