/********************************************************************************
** Form generated from reading UI file 'hariki2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARIKI2_H
#define UI_HARIKI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hariki2Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hariki2Class)
    {
        if (hariki2Class->objectName().isEmpty())
            hariki2Class->setObjectName(QString::fromUtf8("hariki2Class"));
        hariki2Class->resize(898, 778);
        centralWidget = new QWidget(hariki2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 180, 141, 24));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 270, 131, 24));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(670, 390, 120, 80));
        groupBox->setStyleSheet(QString::fromUtf8("border-image: url(:/hariki2/tree-3358468.png);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 131, 24));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(290, 150, 121, 101));
        groupBox_2->setStyleSheet(QString::fromUtf8("border-image: url(:/hariki2/test.png);"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(630, 20, 141, 181));
        groupBox_3->setStyleSheet(QString::fromUtf8("border-image: url(:/hariki2/spy.png);"));
        hariki2Class->setCentralWidget(centralWidget);
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        pushButton->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        menuBar = new QMenuBar(hariki2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 22));
        hariki2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(hariki2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        hariki2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(hariki2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        hariki2Class->setStatusBar(statusBar);

        retranslateUi(hariki2Class);

        QMetaObject::connectSlotsByName(hariki2Class);
    } // setupUi

    void retranslateUi(QMainWindow *hariki2Class)
    {
        hariki2Class->setWindowTitle(QCoreApplication::translate("hariki2Class", "hariki2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("hariki2Class", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\200\320\265\320\272\320\276\321\200\320\264\320\276\320\262", nullptr));
        pushButton_3->setText(QCoreApplication::translate("hariki2Class", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("hariki2Class", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class hariki2Class: public Ui_hariki2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARIKI2_H
