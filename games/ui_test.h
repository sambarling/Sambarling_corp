/********************************************************************************
** Form generated from reading UI file 'testYVjedF.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TESTYVJEDF_H
#define TESTYVJEDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QComboBox *test_select;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTextEdit *test_rez;

    void setupUi(QDialog *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName(QString::fromUtf8("Test"));
        Test->resize(404, 185);
        Test->setMinimumSize(QSize(404, 185));
        Test->setMaximumSize(QSize(404, 185));
        gridLayout = new QGridLayout(Test);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        test_select = new QComboBox(groupBox);
        test_select->addItem(QString());
        test_select->setObjectName(QString::fromUtf8("test_select"));

        gridLayout_2->addWidget(test_select, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Test);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        test_rez = new QTextEdit(groupBox_2);
        test_rez->setObjectName(QString::fromUtf8("test_rez"));

        gridLayout_3->addWidget(test_rez, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QDialog *Test)
    {
        Test->setWindowTitle(QCoreApplication::translate("Test", "Dialog", nullptr));
        groupBox->setTitle(QString());
        test_select->setItemText(0, QCoreApplication::translate("Test", "DPI", nullptr));

        pushButton->setText(QCoreApplication::translate("Test", "\320\267\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\202\320\265\321\201\321\202", nullptr));
        groupBox_2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TESTYVJEDF_H
