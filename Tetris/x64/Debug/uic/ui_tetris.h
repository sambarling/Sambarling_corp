/********************************************************************************
** Form generated from reading UI file 'tetris.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRIS_H
#define UI_TETRIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tetrisClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLCDNumber *score;
    QGroupBox *groupBox_4;
    QPushButton *games;
    QPushButton *about;
    QLabel *pic3;
    QFrame *gamepoll;
    QGroupBox *groupBox;
    QTableWidget *table;
    QLineEdit *Name;
    QGroupBox *groupBox_6;
    QLabel *pic2;
    QGroupBox *groupBox_5;
    QLabel *pic1;
    QPushButton *change;
    QPushButton *music;

    void setupUi(QMainWindow *tetrisClass)
    {
        if (tetrisClass->objectName().isEmpty())
            tetrisClass->setObjectName(QString::fromUtf8("tetrisClass"));
        tetrisClass->resize(800, 600);
        tetrisClass->setMinimumSize(QSize(800, 600));
        tetrisClass->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tetris/x64/Debug/avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        tetrisClass->setWindowIcon(icon);
        centralWidget = new QWidget(tetrisClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 0, 181, 311));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 191, 81));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        score = new QLCDNumber(groupBox_3);
        score->setObjectName(QString::fromUtf8("score"));

        gridLayout->addWidget(score, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 80, 191, 231));
        games = new QPushButton(groupBox_4);
        games->setObjectName(QString::fromUtf8("games"));
        games->setGeometry(QRect(4, 190, 81, 24));
        about = new QPushButton(groupBox_4);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(90, 190, 91, 24));
        pic3 = new QLabel(groupBox_4);
        pic3->setObjectName(QString::fromUtf8("pic3"));
        pic3->setGeometry(QRect(10, 20, 181, 161));
        gamepoll = new QFrame(centralWidget);
        gamepoll->setObjectName(QString::fromUtf8("gamepoll"));
        gamepoll->setGeometry(QRect(180, 0, 431, 601));
        gamepoll->setTabletTracking(false);
        gamepoll->setFrameShape(QFrame::StyledPanel);
        gamepoll->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 181, 311));
        table = new QTableWidget(groupBox);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (table->rowCount() < 5)
            table->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem6);
        table->setObjectName(QString::fromUtf8("table"));
        table->setEnabled(false);
        table->setGeometry(QRect(0, 20, 181, 241));
        table->setAlternatingRowColors(true);
        table->setShowGrid(true);
        table->setGridStyle(Qt::SolidLine);
        table->setSortingEnabled(true);
        table->setWordWrap(true);
        table->setRowCount(5);
        table->setColumnCount(2);
        table->horizontalHeader()->setMinimumSectionSize(82);
        table->horizontalHeader()->setDefaultSectionSize(82);
        table->horizontalHeader()->setHighlightSections(false);
        table->verticalHeader()->setDefaultSectionSize(43);
        Name = new QLineEdit(groupBox);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setEnabled(true);
        Name->setGeometry(QRect(0, 270, 181, 31));
        Name->setMaxLength(32767);
        Name->setFrame(true);
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(610, 300, 191, 301));
        pic2 = new QLabel(groupBox_6);
        pic2->setObjectName(QString::fromUtf8("pic2"));
        pic2->setGeometry(QRect(10, 0, 181, 301));
        pic2->setScaledContents(true);
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 310, 181, 281));
        pic1 = new QLabel(groupBox_5);
        pic1->setObjectName(QString::fromUtf8("pic1"));
        pic1->setGeometry(QRect(0, 50, 181, 231));
        pic1->setScaledContents(true);
        change = new QPushButton(groupBox_5);
        change->setObjectName(QString::fromUtf8("change"));
        change->setGeometry(QRect(10, 10, 75, 23));
        music = new QPushButton(groupBox_5);
        music->setObjectName(QString::fromUtf8("music"));
        music->setGeometry(QRect(100, 10, 75, 23));
        tetrisClass->setCentralWidget(centralWidget);

        retranslateUi(tetrisClass);

        QMetaObject::connectSlotsByName(tetrisClass);
    } // setupUi

    void retranslateUi(QMainWindow *tetrisClass)
    {
        tetrisClass->setWindowTitle(QCoreApplication::translate("tetrisClass", "tetris", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("tetrisClass", "\320\241\321\207\320\265\321\202", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("tetrisClass", "\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        games->setText(QCoreApplication::translate("tetrisClass", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        about->setText(QCoreApplication::translate("tetrisClass", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        pic3->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("tetrisClass", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("tetrisClass", "\320\230\320\263\321\200\320\276\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("tetrisClass", "\320\241\321\207\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("tetrisClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("tetrisClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("tetrisClass", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("tetrisClass", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("tetrisClass", "5", nullptr));
        Name->setInputMask(QString());
        Name->setText(QCoreApplication::translate("tetrisClass", "player", nullptr));
        Name->setPlaceholderText(QCoreApplication::translate("tetrisClass", "\320\232\320\260\320\272 \320\277\321\200\320\270\320\272\320\260\320\266\320\265\321\202\320\265 \320\262\320\260\321\201 \320\267\320\262\320\260\321\202\321\214?", nullptr));
        groupBox_6->setTitle(QString());
        pic2->setText(QCoreApplication::translate("tetrisClass", "TextLabel", nullptr));
        groupBox_5->setTitle(QString());
        change->setText(QCoreApplication::translate("tetrisClass", "\321\201\320\274\320\265\320\275\320\270\321\202\321\214 \321\204\320\276\320\275", nullptr));
        music->setText(QCoreApplication::translate("tetrisClass", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tetrisClass: public Ui_tetrisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRIS_H
