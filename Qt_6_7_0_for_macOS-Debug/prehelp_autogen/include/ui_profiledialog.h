/********************************************************************************
** Form generated from reading UI file 'profiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEDIALOG_H
#define UI_PROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ProfileDialog)
    {
        if (ProfileDialog->objectName().isEmpty())
            ProfileDialog->setObjectName("ProfileDialog");
        ProfileDialog->resize(314, 417);
        verticalLayout = new QVBoxLayout(ProfileDialog);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(ProfileDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label = new QLabel(ProfileDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(ProfileDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(ProfileDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_3 = new QLabel(ProfileDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(ProfileDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::FieldRole, label_5);

        label_6 = new QLabel(ProfileDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(ProfileDialog);
        label_7->setObjectName("label_7");

        formLayout->setWidget(2, QFormLayout::FieldRole, label_7);


        verticalLayout->addLayout(formLayout);

        pushButton_3 = new QPushButton(ProfileDialog);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(ProfileDialog);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ProfileDialog);

        QMetaObject::connectSlotsByName(ProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileDialog)
    {
        ProfileDialog->setWindowTitle(QCoreApplication::translate("ProfileDialog", "Profile", nullptr));
        pushButton->setText(QCoreApplication::translate("ProfileDialog", "Back", nullptr));
        label->setText(QCoreApplication::translate("ProfileDialog", "PROFILE", nullptr));
        label_2->setText(QCoreApplication::translate("ProfileDialog", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("ProfileDialog", "-------------", nullptr));
        label_3->setText(QCoreApplication::translate("ProfileDialog", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("ProfileDialog", "-------------", nullptr));
        label_6->setText(QCoreApplication::translate("ProfileDialog", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("ProfileDialog", "idk if this should be a thing?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ProfileDialog", "Change info", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProfileDialog", "Add caregiver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileDialog: public Ui_ProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEDIALOG_H
