/********************************************************************************
** Form generated from reading UI file 'managedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDIALOG_H
#define UI_MANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ManageDialog)
    {
        if (ManageDialog->objectName().isEmpty())
            ManageDialog->setObjectName("ManageDialog");
        ManageDialog->resize(314, 417);
        pushButton = new QPushButton(ManageDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 71, 32));
        label = new QLabel(ManageDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(80, -20, 299, 78));

        retranslateUi(ManageDialog);

        QMetaObject::connectSlotsByName(ManageDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageDialog)
    {
        ManageDialog->setWindowTitle(QCoreApplication::translate("ManageDialog", "Manage Your Prescriptions", nullptr));
        pushButton->setText(QCoreApplication::translate("ManageDialog", "Back", nullptr));
        label->setText(QCoreApplication::translate("ManageDialog", "Manage your prescriptions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageDialog: public Ui_ManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDIALOG_H
