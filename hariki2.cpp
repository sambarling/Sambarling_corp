#include "hariki2.h"

hariki2::hariki2(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(start_game_slot()));
    connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(record_slot()));
    connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(exit_slot()));
    this->showFullScreen();
    HDC hdcScreen = GetDC(NULL);
    int dpis = GetDeviceCaps(hdcScreen, LOGPIXELSY);
    int cx = GetSystemMetricsForDpi(SM_CXFULLSCREEN, dpis);
    int cy = GetSystemMetricsForDpi(SM_CYVIRTUALSCREEN, dpis);
    double dpix = 96.00 / dpis;
    cx = cx * dpix;
    cy = cy * dpix;
    QRect test(0, 0, cx, cy);
    ui.groupBox->setGeometry(test);
    int tna_cx;
    int tna_cy;
    int tnas_cx;
    int tnas_cy;
    int del;
    int hir;
    int del_cn;
    int hir_cn;
    tnas_cx = cx / 10;
    tnas_cy = cy / 10;
    tna_cx = (cx / 2) - tnas_cx;
    tna_cy = (cy / 2) - tnas_cy;
    del = tnas_cx * 2;
    hir = tnas_cy * 2;
    del_cn = tnas_cx / 5;
    hir_cn = tnas_cy / 3.5;
    QRect groupbox_qrect(tna_cx, tna_cy, del, hir);
    ui.groupBox_2->setGeometry(groupbox_qrect);
    int logo_cx = tnas_cx * 7;
    int logo_del = tnas_cx*3;
    int logo_hir = (tnas_cx / 7) * 10;
    int logo_cy = cy - logo_hir;
    QRect groupbox_logo(logo_cx, logo_cy, logo_del, logo_hir);
    ui.groupBox_3->setGeometry(groupbox_logo);
    int cn1 = (del_cn)+tna_cx;
    int cny1 = (hir_cn)+tna_cy;
    int del_cn1 = del * 0.8;
    QRect cn(cn1, cny1, del_cn1, hir_cn);
    ui.pushButton->setGeometry(cn);
    cn1 = (del_cn)+tna_cx;
    cny1 = (hir_cn * 3) + tna_cy;
    del_cn1 = del * 0.8;
    QRect cn2(cn1, cny1, del_cn1, hir_cn);
    ui.pushButton_2->setGeometry(cn2);
    cn1 = (del_cn)+tna_cx;
    cny1 = (hir_cn * 5) + tna_cy;
    del_cn1 = del * 0.8;
    QRect cn3(cn1, cny1, del_cn1, hir_cn);
    ui.pushButton_3->setGeometry(cn3);
    int testblabla = 100;
}

void hariki2::start_game_slot()
{
    QMainWindow* game = new QMainWindow;
    ui_game.setupUi(game);
    game->show();
    connect(ui_game.start_game, SIGNAL(clicked()), this, SLOT(start_game_slot_now()));
    game->showFullScreen();
    HDC hdcScreen = GetDC(NULL);
    int dpis = GetDeviceCaps(hdcScreen, LOGPIXELSY);
    int cx = GetSystemMetricsForDpi(SM_CXFULLSCREEN, dpis);
    int cy = GetSystemMetricsForDpi(SM_CYVIRTUALSCREEN, dpis);
    double dpix = 96.00 / dpis;
    cx = cx * dpix;
    cy = cy * dpix;
    QRect test(0, 0, cx, cy);
    ui_game.groupBox->setGeometry(test);
    int cx_groupbox = cx / 10;
    int cy_groupbox = cy / 10;
    int del_groupbox = cx - (cx_groupbox * 3);
    int hir_groupbox = cy - (cy_groupbox * 2);
    int start_game_x=cx_groupbox;
    int start_game_y=cy_groupbox;
    QRect groupbox_qrect(cx_groupbox, cy_groupbox, del_groupbox, hir_groupbox);
    ui_game.groupBox_2->setGeometry(groupbox_qrect);
    int cx_start_game = cx - ((cx / 20) * 3);
    int cy_start_game = cy / 10;
    int del_start_game = ((cx / 20) * 2);
    int hir_start_game = cx / 20;
    QRect start_game_qrect(cx_start_game, cy_start_game, del_start_game, hir_start_game);
    ui_game.start_game->setGeometry(start_game_qrect);
    int cx_time = (cx - ((cx / 20) * 3)) + 1;
    int cy_time = (cy / 10) + (cx / 20) + 7;
    int del_time = ((cx / 20) * 2) - 2;
    int hir_time = cx / 20;
    QRect time_qrect(cx_time, cy_time, del_time, hir_time);
    ui_game.time_game->setGeometry(time_qrect);
    int group_pol_del = (del_groupbox / 14) * 4;
    int group_pol_hir = (hir_groupbox / 14) * 4;
    int group_pol_1_cx =start_game_x+(del_groupbox/14);
    int group_pol_1_cy =start_game_y+(hir_groupbox/14);
    int group_pol_2_cx=start_game_x+(del_groupbox/14) +((del_groupbox/14)*4);
    int group_pol_2_cy= group_pol_1_cy;
    int group_pol_3_cx = start_game_x + ((del_groupbox/14))+ (((del_groupbox / 14)*4)*2);
    int group_pol_3_cy = group_pol_1_cy;
    int group_pol_4_cx = start_game_x + (del_groupbox / 14);
    int group_pol_4_cy = start_game_y + (hir_groupbox / 14)+ ((hir_groupbox / 14) * 4);
    int group_pol_5_cx = start_game_x + (del_groupbox / 14) + ((del_groupbox / 14) * 4);
    int group_pol_5_cy = start_game_y + (hir_groupbox / 14) + ((hir_groupbox / 14) * 4);
    int group_pol_6_cx = start_game_x + ((del_groupbox / 14)) + (((del_groupbox / 14) * 4) * 2);
    int group_pol_6_cy = start_game_y + ((hir_groupbox / 14)) + (((hir_groupbox / 14) * 4));
    int group_pol_7_cx = start_game_x + (del_groupbox / 14);
    int group_pol_7_cy = start_game_y + ((hir_groupbox / 14)) + (((hir_groupbox / 14) * 4)*2);
    int group_pol_8_cx = start_game_x + (del_groupbox / 14) + ((del_groupbox / 14) * 4);
    int group_pol_8_cy = start_game_y + ((hir_groupbox / 14)) + (((hir_groupbox / 14) * 4) * 2);
    int group_pol_9_cx = start_game_x + ((del_groupbox / 14)) + (((del_groupbox / 14) * 4) * 2);
    int group_pol_9_cy = start_game_y + ((hir_groupbox / 14)) + (((hir_groupbox / 14) * 4) * 2);
    QRect group_pol_1_qrect(group_pol_1_cx,group_pol_1_cy,group_pol_del,group_pol_hir);
    QRect group_pol_2_qrect(group_pol_2_cx, group_pol_2_cy, group_pol_del, group_pol_hir);
    QRect group_pol_3_qrect(group_pol_3_cx, group_pol_3_cy, group_pol_del, group_pol_hir);
    QRect group_pol_4_qrect(group_pol_4_cx, group_pol_4_cy, group_pol_del, group_pol_hir);
    QRect group_pol_5_qrect(group_pol_5_cx, group_pol_5_cy, group_pol_del, group_pol_hir);
    QRect group_pol_6_qrect(group_pol_6_cx, group_pol_6_cy, group_pol_del, group_pol_hir);
    QRect group_pol_7_qrect(group_pol_7_cx, group_pol_7_cy, group_pol_del, group_pol_hir);
    QRect group_pol_8_qrect(group_pol_8_cx, group_pol_8_cy, group_pol_del, group_pol_hir);
    QRect group_pol_9_qrect(group_pol_9_cx, group_pol_9_cy, group_pol_del, group_pol_hir);
    ui_game.graphicsView->setGeometry(group_pol_1_qrect);
    ui_game.graphicsView_2->setGeometry(group_pol_2_qrect);
    ui_game.graphicsView_3->setGeometry(group_pol_3_qrect);
    ui_game.graphicsView_4->setGeometry(group_pol_4_qrect);
    ui_game.graphicsView_5->setGeometry(group_pol_5_qrect);
    ui_game.graphicsView_6->setGeometry(group_pol_6_qrect);
    ui_game.graphicsView_7->setGeometry(group_pol_7_qrect);
    ui_game.graphicsView_8->setGeometry(group_pol_8_qrect);
    ui_game.graphicsView_9->setGeometry(group_pol_9_qrect);
    //------------------------console game-------------------------------------------------------
    krug krug11;
    krug krug12;
    krug krug13;
    krug krug21;
    krug krug22;
    krug krug23;
    krug krug31;
    krug krug32;
    krug krug33;
}


void hariki2::record_slot()
{
    QDialog* record = new QDialog;
    ui_record.setupUi(record);
    record->show();
    QFile file(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/rez.txt");
    file.open(QIODevice::ReadOnly);
    ui_record.record->setItem(0, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(0, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(1, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(1, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(2, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(2, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(3, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(3, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(4, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(4, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(5, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(5, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(6, 0, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(6, 1, new QTableWidgetItem(QString(file.readLine())));
    file.close();
}

void hariki2::exit_slot()
{
    QMainWindow::close();
}
