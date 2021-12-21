/********************************************************************************
** Form generated from reading UI file 'testzyfKNU.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TESTZYFKNU_H
#define TESTZYFKNU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName(QString::fromUtf8("Test"));
        Test->resize(404, 185);
        Test->setMinimumSize(QSize(404, 185));
        Test->setMaximumSize(QSize(404, 185));
        groupBox_2 = new QGroupBox(Test);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 10, 191, 171));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 49, 16));
        groupBox = new QGroupBox(Test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 201, 171));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 60, 81, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 81, 16));

        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QDialog *Test)
    {
        Test->setWindowTitle(QCoreApplication::translate("Test", "Dialog", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Test", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("Test", "\320\230\320\275\321\204\320\276", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Test", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\265\321\201\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TESTZYFKNU_H
