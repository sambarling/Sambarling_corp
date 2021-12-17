/********************************************************************************
** Form generated from reading UI file 'hariki_and_tetrisKTiYTC.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HARIKI_AND_TETRISKTIYTC_H
#define HARIKI_AND_TETRISKTIYTC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
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
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_8;
    QGraphicsView *graphicsView_9;

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
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(60, 500, 256, 192));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(250, 410, 256, 192));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(350, 290, 256, 192));
        graphicsView_3->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_4 = new QGraphicsView(centralWidget);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(490, 190, 256, 192));
        graphicsView_4->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_5 = new QGraphicsView(centralWidget);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(560, 90, 256, 192));
        graphicsView_5->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_6 = new QGraphicsView(centralWidget);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(100, 590, 256, 192));
        graphicsView_6->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_7 = new QGraphicsView(centralWidget);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(320, 540, 256, 192));
        graphicsView_7->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_8 = new QGraphicsView(centralWidget);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(490, 480, 256, 192));
        graphicsView_8->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
        graphicsView_9 = new QGraphicsView(centralWidget);
        graphicsView_9->setObjectName(QString::fromUtf8("graphicsView_9"));
        graphicsView_9->setGeometry(QRect(550, 360, 256, 192));
        graphicsView_9->setStyleSheet(QString::fromUtf8("border-image: url(:/newPrefix/bg.png);"));
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

    } // retranslateUi

};

namespace Ui {
    class hariki_and_tetrisClass: public Ui_hariki_and_tetrisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HARIKI_AND_TETRISKTIYTC_H
