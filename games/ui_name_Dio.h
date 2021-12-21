/********************************************************************************
** Form generated from reading UI file 'name_DiokSQdsl.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NAME_DIOKSQDSL_H
#define NAME_DIOKSQDSL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Name_Dio
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Name_Dio)
    {
        if (Name_Dio->objectName().isEmpty())
            Name_Dio->setObjectName(QString::fromUtf8("Name_Dio"));
        Name_Dio->resize(289, 71);
        Name_Dio->setMinimumSize(QSize(289, 71));
        Name_Dio->setMaximumSize(QSize(289, 71));
        gridLayout = new QGridLayout(Name_Dio);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Name_Dio);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        lineEdit = new QLineEdit(Name_Dio);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 3);


        retranslateUi(Name_Dio);

        QMetaObject::connectSlotsByName(Name_Dio);
    } // setupUi

    void retranslateUi(QDialog *Name_Dio)
    {
        Name_Dio->setWindowTitle(QCoreApplication::translate("Name_Dio", "Your name", nullptr));
        pushButton->setText(QCoreApplication::translate("Name_Dio", "\320\245\320\276\321\200\320\276\321\210\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Name_Dio: public Ui_Name_Dio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NAME_DIOKSQDSL_H
