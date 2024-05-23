#include "managedialog.h"
#include "ui_managedialog.h"

ManageDialog::ManageDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ManageDialog)
{
    ui->setupUi(this);
}

ManageDialog::~ManageDialog()
{
    delete ui;
}

void ManageDialog::on_pushButton_clicked()
{
    this->done(1);
}

