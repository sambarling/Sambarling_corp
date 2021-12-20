/********************************************************************************
** Form generated from reading UI file 'hariki_and_tetrisPGDOUC.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HARIKI_AND_TETRISPGDOUC_H
#define HARIKI_AND_TETRISPGDOUC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hariki_and_tetrisClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *start_game;
    QComboBox *time_game;
    QLabel *graphicsView;
    QLabel *graphicsView_2;
    QLabel *graphicsView_3;
    QLabel *graphicsView_4;
    QLabel *graphicsView_5;
    QLabel *graphicsView_6;
    QLabel *graphicsView_7;
    QLabel *graphicsView_8;
    QLabel *graphicsView_9;

    void setupUi(QMainWindow *hariki_and_tetrisClass)
    {
        if (hariki_and_tetrisClass->objectName().isEmpty())
            hariki_and_tetrisClass->setObjectName(QString::fromUtf8("hariki_and_tetrisClass"));
        hariki_and_tetrisClass->resize(1022, 874);
        centralWidget = new QWidget(hariki_and_tetrisClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(820, 630, 120, 80));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("border-image: url(:/hariki2/tree-3358468.png);"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 240, 120, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("border-image: url(:/hariki2/test.png);"));
        start_game = new QPushButton(centralWidget);
        start_game->setObjectName(QString::fromUtf8("start_game"));
        start_game->setGeometry(QRect(400, 130, 75, 24));
        time_game = new QComboBox(centralWidget);
        time_game->addItem(QString());
        time_game->addItem(QString());
        time_game->addItem(QString());
        time_game->addItem(QString());
        time_game->setObjectName(QString::fromUtf8("time_game"));
        time_game->setGeometry(QRect(400, 170, 71, 22));
        graphicsView = new QLabel(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(210, 490, 49, 16));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView->setScaledContents(true);
        graphicsView_2 = new QLabel(centralWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(410, 470, 49, 16));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_2->setScaledContents(true);
        graphicsView_3 = new QLabel(centralWidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(510, 480, 49, 16));
        graphicsView_3->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_3->setScaledContents(true);
        graphicsView_4 = new QLabel(centralWidget);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(240, 540, 49, 16));
        graphicsView_4->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_4->setScaledContents(true);
        graphicsView_5 = new QLabel(centralWidget);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(410, 530, 49, 16));
        graphicsView_5->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_5->setScaledContents(true);
        graphicsView_6 = new QLabel(centralWidget);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(520, 540, 49, 16));
        graphicsView_6->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_6->setScaledContents(true);
        graphicsView_7 = new QLabel(centralWidget);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(240, 590, 49, 16));
        graphicsView_7->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_7->setScaledContents(true);
        graphicsView_8 = new QLabel(centralWidget);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(410, 590, 49, 16));
        graphicsView_8->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_8->setScaledContents(true);
        graphicsView_9 = new QLabel(centralWidget);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(560, 590, 49, 16));
        graphicsView_9->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_9->setScaledContents(true);
        hariki_and_tetrisClass->setCentralWidget(centralWidget);

        retranslateUi(hariki_and_tetrisClass);

        QMetaObject::connectSlotsByName(hariki_and_tetrisClass);
    } // setupUi

    void retranslateUi(QMainWindow *hariki_and_tetrisClass)
    {
        hariki_and_tetrisClass->setWindowTitle(QCoreApplication::translate("hariki_and_tetrisClass", "hariki_and_tetris", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        start_game->setText(QCoreApplication::translate("hariki_and_tetrisClass", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        time_game->setItemText(0, QCoreApplication::translate("hariki_and_tetrisClass", "5 \320\274\320\270\320\275\321\203\321\202", nullptr));
        time_game->setItemText(1, QCoreApplication::translate("hariki_and_tetrisClass", "10 \320\274\320\270\320\275\321\203\321\202", nullptr));
        time_game->setItemText(2, QCoreApplication::translate("hariki_and_tetrisClass", "15 \320\274\320\270\320\275\321\203\321\202", nullptr));
        time_game->setItemText(3, QCoreApplication::translate("hariki_and_tetrisClass", "20 \320\274\320\270\320\275\321\203\321\202", nullptr));

        graphicsView->setText(QString());
        graphicsView_2->setText(QString());
        graphicsView_3->setText(QString());
        graphicsView_4->setText(QString());
        graphicsView_5->setText(QString());
        graphicsView_6->setText(QString());
        graphicsView_7->setText(QString());
        graphicsView_8->setText(QString());
        graphicsView_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hariki_and_tetrisClass: public Ui_hariki_and_tetrisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HARIKI_AND_TETRISPGDOUC_H
