/********************************************************************************
** Form generated from reading UI file 'recordeuyRTX.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef RECORDEUYRTX_H
#define RECORDEUYRTX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_record_table
{
public:
    QTableWidget *record;

    void setupUi(QDialog *record_table)
    {
        if (record_table->objectName().isEmpty())
            record_table->setObjectName(QString::fromUtf8("record_table"));
        record_table->resize(340, 200);
        record_table->setMinimumSize(QSize(340, 200));
        record_table->setMaximumSize(QSize(340, 200));
        record = new QTableWidget(record_table);
        if (record->columnCount() < 2)
            record->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        record->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        record->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (record->rowCount() < 5)
            record->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        record->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        record->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        record->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        record->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        record->setVerticalHeaderItem(4, __qtablewidgetitem6);
        record->setObjectName(QString::fromUtf8("record"));
        record->setGeometry(QRect(9, 9, 321, 181));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(record->sizePolicy().hasHeightForWidth());
        record->setSizePolicy(sizePolicy);
        record->setMinimumSize(QSize(321, 181));
        record->setMaximumSize(QSize(321, 181));
        record->horizontalHeader()->setVisible(true);
        record->horizontalHeader()->setCascadingSectionResizes(false);
        record->horizontalHeader()->setDefaultSectionSize(150);
        record->horizontalHeader()->setHighlightSections(true);
        record->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        record->horizontalHeader()->setStretchLastSection(false);
        record->verticalHeader()->setVisible(true);
        record->verticalHeader()->setCascadingSectionResizes(true);
        record->verticalHeader()->setStretchLastSection(false);

        retranslateUi(record_table);

        QMetaObject::connectSlotsByName(record_table);
    } // setupUi

    void retranslateUi(QDialog *record_table)
    {
        record_table->setWindowTitle(QCoreApplication::translate("record_table", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = record->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("record_table", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = record->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("record_table", "\320\241\321\207\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = record->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("record_table", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = record->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("record_table", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = record->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("record_table", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = record->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("record_table", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = record->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("record_table", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record_table: public Ui_record_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RECORDEUYRTX_H
