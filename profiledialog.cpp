#include "profiledialog.h"
#include "ui_profiledialog.h"

ProfileDialog::ProfileDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ProfileDialog)
{
    ui->setupUi(this);
}

ProfileDialog::~ProfileDialog()
{
    delete ui;
}

void ProfileDialog::on_pushButton_clicked()
{
    this->done(1);

}

