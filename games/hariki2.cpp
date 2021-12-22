#include "hariki2.h"

hariki2::hariki2(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui_name.setupUi(names);
    ui_game.setupUi(game);
    ui_test.setupUi(test_ui_init);
    DPI.setupUi(DPI_dialog);
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(timer_slot()));
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(name_but()));
    connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(record_slot()));
    connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(exit_slot()));
    start_status = false;
    this->showFullScreen();
    HDC hdcScreen = GetDC(NULL);
    dpis = GetDeviceCaps(hdcScreen, LOGPIXELSY);
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
    time_t now = time(0);
    tm* ltm = localtime(&now);
    hour = ltm->tm_hour;
    if ((hour == 22) || (hour == 23))
    {
        hour = 0;
    }
    else;
    min = ltm->tm_min;
}

void hariki2::start_game_slot()
{
    name = ui_name.lineEdit->text();
    names->close();
    game->show();
    connect(ui_game.start_game, SIGNAL(clicked()), this, SLOT(new_game_slot()));
    connect(ui_game.pushButton_1, SIGNAL(clicked()), this, SLOT(slot1()));
    connect(ui_game.pushButton_2, SIGNAL(clicked()), this, SLOT(slot2()));
    connect(ui_game.pushButton_3, SIGNAL(clicked()), this, SLOT(slot3()));
    connect(ui_game.pushButton_4, SIGNAL(clicked()), this, SLOT(slot4()));
    connect(ui_game.pushButton_5, SIGNAL(clicked()), this, SLOT(slot5()));
    connect(ui_game.pushButton_6, SIGNAL(clicked()), this, SLOT(slot6()));
    connect(ui_game.pushButton_7, SIGNAL(clicked()), this, SLOT(slot7()));
    connect(ui_game.pushButton_8, SIGNAL(clicked()), this, SLOT(slot8()));
    connect(ui_game.pushButton_9, SIGNAL(clicked()), this, SLOT(slot9()));
    connect(ui_game.pushButton, SIGNAL(clicked()), this, SLOT(push_exit2()));
    game->showFullScreen();
    HDC hdcScreen = GetDC(NULL);
    dpis = GetDeviceCaps(hdcScreen, LOGPIXELSY);
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
    // неверная версия
    int lcd_x = cx - ((cx / 20) * 3);
    int lcd_y = cy / 10;
    int del_lcd = ((cx / 20 - 5) * 3);
    int hir_lcd = cx / 20;
    QRect lcd_slot(lcd_x, lcd_y, del_lcd, hir_lcd);
    ui_game.lcdNumber->setGeometry(lcd_slot);
    int cy_start_game = (cy / 10) + (cx / 20) + 7;
    QRect start_game_qrect(lcd_x, cy_start_game, del_lcd, hir_lcd);
    ui_game.start_game->setGeometry(start_game_qrect);
    int cy_time = (cy / 10) + ((cx / 20) * 2) + 14;
    QRect time_qrect(lcd_x, cy_time, del_lcd, hir_lcd);
    ui_game.time_game->setGeometry(time_qrect);
    int line_y = (cy / 10) + ((cx / 20) * 3) + 21;
    QRect line_slot(lcd_x, line_y, del_lcd, hir_lcd);
    ui_game.lineEdit->setGeometry(line_slot);
    int timer_game_s1= (cy / 10)*9;
    QRect timer_game_s11(lcd_x, timer_game_s1, del_lcd, hir_lcd);
    ui_game.time_game_2->setGeometry(timer_game_s11);
    int exit_slot_y=  (cy / 10) + ((cx / 20) * 4) + 28;
    QRect exit_slot (lcd_x, exit_slot_y, del_lcd, hir_lcd);
    ui_game.pushButton->setGeometry(exit_slot);


    group_pol_del = (del_groupbox / 14) * 4;
    group_pol_hir = (hir_groupbox / 14) * 4;
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
    ui_game.pushButton_1->setGeometry(group_pol_1_qrect);
    ui_game.graphicsView_2->setGeometry(group_pol_2_qrect);
    ui_game.pushButton_2->setGeometry(group_pol_2_qrect);
    ui_game.graphicsView_3->setGeometry(group_pol_3_qrect);
    ui_game.pushButton_3->setGeometry(group_pol_3_qrect);
    ui_game.graphicsView_4->setGeometry(group_pol_4_qrect);
    ui_game.pushButton_4->setGeometry(group_pol_4_qrect);
    ui_game.graphicsView_5->setGeometry(group_pol_5_qrect);
    ui_game.pushButton_5->setGeometry(group_pol_5_qrect);
    ui_game.graphicsView_6->setGeometry(group_pol_6_qrect);
    ui_game.pushButton_6->setGeometry(group_pol_6_qrect);
    ui_game.graphicsView_7->setGeometry(group_pol_7_qrect);
    ui_game.pushButton_7->setGeometry(group_pol_7_qrect);
    ui_game.graphicsView_8->setGeometry(group_pol_8_qrect);
    ui_game.pushButton_8->setGeometry(group_pol_8_qrect);
    ui_game.graphicsView_9->setGeometry(group_pol_9_qrect);
    ui_game.pushButton_9->setGeometry(group_pol_9_qrect);
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int secs = ltm->tm_sec;
    srand(secs);
    time_s = -10;
    score = 0;
    start_status = false;
    QPixmap clean;
    ui_game.graphicsView->setPixmap(clean);
    ui_game.graphicsView_2->setPixmap(clean);
    ui_game.graphicsView_3->setPixmap(clean);
    ui_game.graphicsView_4->setPixmap(clean);
    ui_game.graphicsView_5->setPixmap(clean);
    ui_game.graphicsView_6->setPixmap(clean);
    ui_game.graphicsView_7->setPixmap(clean);
    ui_game.graphicsView_8->setPixmap(clean);
    ui_game.graphicsView_9->setPixmap(clean);
    ui_game.start_game->setEnabled(true);
    ui_game.time_game->setEnabled(true);
    ui_game.time_game_2->display(0);
    ui_game.lineEdit->setText("");
    ui_game.lcdNumber->display(0);
}

void hariki2::update(krug a, krug b, krug c, krug d, krug e, krug f, krug g, krug h, krug t)
{
    ui_game.graphicsView->setPixmap(a.select_pix(a.ver_color(), a.ver_tone()));
    ui_game.graphicsView_2->setPixmap(b.select_pix(b.ver_color(), b.ver_tone()));
    ui_game.graphicsView_3->setPixmap(c.select_pix(c.ver_color(), c.ver_tone()));
    ui_game.graphicsView_4->setPixmap(d.select_pix(d.ver_color(), d.ver_tone()));
    ui_game.graphicsView_5->setPixmap(e.select_pix(e.ver_color(), e.ver_tone()));
    ui_game.graphicsView_6->setPixmap(f.select_pix(f.ver_color(), f.ver_tone()));
    ui_game.graphicsView_7->setPixmap(g.select_pix(g.ver_color(), g.ver_tone()));
    ui_game.graphicsView_8->setPixmap(h.select_pix(h.ver_color(), h.ver_tone()));
    ui_game.graphicsView_9->setPixmap(t.select_pix(t.ver_color(), t.ver_tone()));
}

krug hariki2::select_yes(int stav)
{
    switch (stav)
    {
    case 0:
        return krug11;
        break;
    case 1:
        return krug12;
        break;
    case 2:
        return krug13;
        break;
    case 3:
        return krug21;
        break;
    case 4:
        return krug22;
        break;
    case 5:
        return krug23;
        break;
    case 6:
        return krug31;
        break;
    case 7:
        return krug32;
        break;
    case 8:
        return krug33;
        break;
    }
}

void hariki2::write_yes(int color, int tone, int stav)
{
    switch (stav)
    {
    case 0:
        krug11.writes(color, tone);
        break;
    case 1:
        krug12.writes(color, tone);
        break;
    case 2:
        krug13.writes(color, tone);
        break;
    case 3:
        krug21.writes(color, tone);
        break;
    case 4:
        krug22.writes(color, tone);
        break;
    case 5:
        krug23.writes(color, tone);
        break;
    case 6:
        krug31.writes(color, tone);
        break;
    case 7:
        krug32.writes(color, tone);
        break;
    case 8:
        krug33.writes(color, tone);
        break;
    }
}

void hariki2::keyPressEvent(QKeyEvent* event)
{
    quint32 key_active;
    key_active = event->nativeScanCode();
    if (key_active == 41)
    {
        connect(ui_test.pushButton, SIGNAL(clicked()), this, SLOT(test_mow()));
        test_ui_init->show();
    }
    else;
}

void hariki2::record_slot()
{
    QDialog* record = new QDialog;
    ui_record.setupUi(record);
    record->show();
    QFile file(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/rez.txt");
    file.open(QIODevice::ReadOnly);
    ui_record.record->setItem(0, 0, new QTableWidgetItem(QString(file.readLine())));
    new QTableWidgetItem(QString(file.readLine()));
    ui_record.record->setItem(0, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(1, 0, new QTableWidgetItem(QString(file.readLine())));
    new QTableWidgetItem(QString(file.readLine()));
    ui_record.record->setItem(1, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(2, 0, new QTableWidgetItem(QString(file.readLine())));
    new QTableWidgetItem(QString(file.readLine()));
    ui_record.record->setItem(2, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(3, 0, new QTableWidgetItem(QString(file.readLine())));
    new QTableWidgetItem(QString(file.readLine()));
    ui_record.record->setItem(3, 1, new QTableWidgetItem(QString(file.readLine())));
    ui_record.record->setItem(4, 0, new QTableWidgetItem(QString(file.readLine())));
    new QTableWidgetItem(QString(file.readLine()));
    ui_record.record->setItem(4, 1, new QTableWidgetItem(QString(file.readLine())));
    file.close();
}

void hariki2::exit_slot()
{
    QMainWindow::close();
}

void hariki2::new_game_slot()
{
   //------------------------console game-------------------------------------------------------
   int sl = rand();
   povt = 0;
   pov = sl % 24;
   QString test15(ui_game.time_game->currentText().toLocal8Bit());
   if (time_s == -10)
   {
       QString time1("2 минуты (120 секунд)");
       if (test15 == time1)
       {
           time_s = 120;
       }
       else
       {
           QString time2("3 минуты (180 секунд)");
           if (time2 == test15)
           {
               time_s = 180;
           }
           else
           {
               QString time3("5 минут (300 секунд)");
               if (time3 == test15)
               {
                   time_s = 300;
               }
               else
               {
                   QString time4("10 минут (600 секунд)");
                   if (time4 == test15)
                   {
                       time_s = 600;
                   }
                   else;
               };
           };
       };
   }
   else;
   ui_game.time_game->setEnabled(false);
   if (pov == 1) pov = 2;
   else;
   open = false;
   timer->start(500);
    if (start_status == false) 
    {
        timer2->start(1000);
        start_status = true;
    }
    else;
}

void hariki2::slotTimerAlarm()
{
    if (pov == povt)
    {
        timer->stop();
        open = true;
    }
    else {
        krug11.init();
        krug12.init();
        krug13.init();
        krug21.init();
        krug22.init();
        krug23.init();
        krug31.init();
        krug32.init();
        krug33.init();
        if (povt == 0);
        else
        {
            if ((krug11.ver_color() == select_yes(yesp).ver_color()) && (krug11.ver_tone() == select_yes(yesp).ver_tone())&&(yesp!=0))
            {
                while ((krug11.ver_color() == select_yes(yesp).ver_color()) && (krug11.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug11.init();
                }
            }
            else;
            if ((krug12.ver_color() == select_yes(yesp).ver_color()) && (krug12.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 1))
            {
                while ((krug12.ver_color() == select_yes(yesp).ver_color()) && (krug12.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug12.init();
                }
            }
            else;
            if ((krug13.ver_color() == select_yes(yesp).ver_color()) && (krug13.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 2))
            {
                while ((krug13.ver_color() == select_yes(yesp).ver_color()) && (krug13.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug13.init();
                }
            }
            else;
            if ((krug21.ver_color() == select_yes(yesp).ver_color()) && (krug21.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 3))
            {
                while ((krug21.ver_color() == select_yes(yesp).ver_color()) && (krug21.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug21.init();
                }
            }
            else;
            if ((krug22.ver_color() == select_yes(yesp).ver_color()) && (krug22.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 4))
            {
                while ((krug22.ver_color() == select_yes(yesp).ver_color()) && (krug22.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug22.init();
                }
            }
            else;
            if ((krug23.ver_color() == select_yes(yesp).ver_color()) && (krug23.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 5))
            {
                while ((krug23.ver_color() == select_yes(yesp).ver_color()) && (krug23.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug23.init();
                }
            }
            else;
            if ((krug31.ver_color() == select_yes(yesp).ver_color()) && (krug31.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 6))
            {
                while ((krug31.ver_color() == select_yes(yesp).ver_color()) && (krug31.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug31.init();
                }
            }
            else;
            if ((krug32.ver_color() == select_yes(yesp).ver_color()) && (krug32.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 7))
            {
                while ((krug32.ver_color() == select_yes(yesp).ver_color()) && (krug32.ver_tone() == select_yes(yesp).ver_tone()))
                {
                     krug32.init();
                }
            }
            else;
            if ((krug33.ver_color() == select_yes(yesp).ver_color()) && (krug33.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 8))
            {
                while ((krug33.ver_color() == select_yes(yesp).ver_color()) && (krug33.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug33.init();
                }
            }
            else;
        }
    
        
        if (povt == 1)  {
            Sleep(4000);
        }
        else;
        povt = povt + 1;
        if (povt == 1) 
        {
            int tempy = rand();
            yesp = tempy % 9;
            yesp1 = select_yes(yesp).ver_color();
            yesp2 = select_yes(yesp).ver_tone();
            QString rezult(QString::fromLocal8Bit("Следите за "));
            QString info;
            info = krug11.select_name_pix(yesp1, yesp2);
            QString info2(QString::fromLocal8Bit(" ( "));
            QString info3(QString::fromLocal8Bit(" )"));
            QString yespz = QString::number(yesp+1);
            QString info4 = rezult + info + info2 + yespz + info3;
            rez12 = rezult + info;
            ui_game.lineEdit->setText(info4);
        }
        else
        {
            int tempy = rand();
            yesprez = tempy % 9;
            write_yes(yesp1, yesp2, yesprez);
            yesp = yesprez;
            if ((krug11.ver_color() == select_yes(yesp).ver_color()) && (krug11.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 0))
            {
                while ((krug11.ver_color() == select_yes(yesp).ver_color()) && (krug11.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug11.init();
                }
            }
            else;
            if ((krug12.ver_color() == select_yes(yesp).ver_color()) && (krug12.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 1))
            {
                while ((krug12.ver_color() == select_yes(yesp).ver_color()) && (krug12.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug12.init();
                }
            }
            else;
            if ((krug13.ver_color() == select_yes(yesp).ver_color()) && (krug13.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 2))
            {
                while ((krug13.ver_color() == select_yes(yesp).ver_color()) && (krug13.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug13.init();
                }
            }
            else;
            if ((krug21.ver_color() == select_yes(yesp).ver_color()) && (krug21.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 3))
            {
                while ((krug21.ver_color() == select_yes(yesp).ver_color()) && (krug21.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug21.init();
                }
            }
            else;
            if ((krug22.ver_color() == select_yes(yesp).ver_color()) && (krug22.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 4))
            {
                while ((krug22.ver_color() == select_yes(yesp).ver_color()) && (krug22.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug22.init();
                }
            }
            else;
            if ((krug23.ver_color() == select_yes(yesp).ver_color()) && (krug23.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 5))
            {
                while ((krug23.ver_color() == select_yes(yesp).ver_color()) && (krug23.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug23.init();
                }
            }
            else;
            if ((krug31.ver_color() == select_yes(yesp).ver_color()) && (krug31.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 6))
            {
                while ((krug31.ver_color() == select_yes(yesp).ver_color()) && (krug31.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug31.init();
                }
            }
            else;
            if ((krug32.ver_color() == select_yes(yesp).ver_color()) && (krug32.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 7))
            {
                while ((krug32.ver_color() == select_yes(yesp).ver_color()) && (krug32.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug32.init();
                }
            }
            else;
            if ((krug33.ver_color() == select_yes(yesp).ver_color()) && (krug33.ver_tone() == select_yes(yesp).ver_tone()) && (yesp != 8))
            {
                while ((krug33.ver_color() == select_yes(yesp).ver_color()) && (krug33.ver_tone() == select_yes(yesp).ver_tone()))
                {
                    krug33.init();
                }
            }
            else;
            ui_game.lineEdit->setText(rez12);
        }
        update(krug11, krug12, krug13, krug21, krug22, krug23, krug31, krug32, krug33);
    }
}

void hariki2::slot1()
{
    if (open == true)
    {
        int select_user = 0;
        if (select_user == yesp)
        {
            ui_game.graphicsView->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot2()
{
    if (open == true)
    {
        int select_user = 1;
        if (select_user == yesp)
        {
            ui_game.graphicsView_2->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_2->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot3()
{
    if (open == true)
    {
        int select_user = 2;
        if (select_user == yesp)
        {
            ui_game.graphicsView_3->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_3->setPixmap(krug11.select_pix(5, 2));  
            open = false;
        };
    }
    else;
}

void hariki2::slot4()
{
    if (open == true)
    {
        int select_user = 3;
        if (select_user == yesp)
        {
            ui_game.graphicsView_4->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_4->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot5()
{
    if (open == true)
    {
        int select_user = 4;
        if (select_user == yesp)
        {
            ui_game.graphicsView_5->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_5->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot6()
{
    if (open == true)
    {
        int select_user = 5;
        if (select_user == yesp)
        {
            ui_game.graphicsView_6->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_6->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot7()
{
    if (open == true)
    {
        int select_user = 6;
        if (select_user == yesp)
        {
            ui_game.graphicsView_7->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_7->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot8()
{
    if (open == true)
    {
        int select_user = 7;
        if (select_user == yesp)
        {
            ui_game.graphicsView_8->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_8->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::slot9()
{
    if (open == true)
    {
        int select_user = 8;
        if (select_user == yesp)
        {
            ui_game.graphicsView_9->setPixmap(krug11.select_pix(5, 1));
            score_up(100);
            ui_game.lcdNumber->display(score);
            open = false;
        }
        else
        {
            ui_game.graphicsView_9->setPixmap(krug11.select_pix(5, 2));
            open = false;
        };
    }
    else;
}

void hariki2::timer_slot()
{
    if (time_s == 0)
    {
        timer2->stop();
        timer->stop();
        ui_game.graphicsView->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_2->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_3->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_4->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_5->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_6->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_7->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_8->setPixmap(krug11.select_pix(5, 2));
        ui_game.graphicsView_9->setPixmap(krug11.select_pix(5, 2));
        ui_game.start_game->setEnabled(false);
        open = false;
        table_itemtetris mas[6];
        QFile file(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/rez.txt");
        file.open(QIODevice::ReadOnly);
        QTableWidgetItem* item1 = new QTableWidgetItem(QString(file.readLine()));
        file.readLine();
        QTableWidgetItem* item2 = new QTableWidgetItem(QString(file.readLine()));
        QTableWidgetItem* item3 = new QTableWidgetItem(QString(file.readLine()));
        file.readLine();
        QTableWidgetItem* item4 = new QTableWidgetItem(QString(file.readLine()));
        QTableWidgetItem* item5 = new QTableWidgetItem(QString(file.readLine()));
        file.readLine();
        QTableWidgetItem* item6 = new QTableWidgetItem(QString(file.readLine()));
        QTableWidgetItem* item7 = new QTableWidgetItem(QString(file.readLine()));
        file.readLine();
        QTableWidgetItem* item8 = new QTableWidgetItem(QString(file.readLine()));
        QTableWidgetItem* item9 = new QTableWidgetItem(QString(file.readLine()));
        file.readLine();
        QTableWidgetItem* item10 = new QTableWidgetItem(QString(file.readLine()));
        file.close();
        QString names;
        QString fiks("\n");
        names = name;
        names = names + fiks;
        int scores2;
        scores2 = score;
        mas[0].set_name(item1->text());
        mas[0].set_rez(item2->text().toInt());
        mas[1].set_name(item3->text());
        mas[1].set_rez(item4->text().toInt());
        mas[2].set_name(item5->text());
        mas[2].set_rez(item6->text().toInt());
        mas[3].set_name(item7->text());
        mas[3].set_rez(item8->text().toInt());
        mas[4].set_name(item9->text());
        mas[4].set_rez(item10->text().toInt());
        mas[5].set_name(names);
        mas[5].set_rez(scores2);
        int x;
        int y;
        table_itemtetris temp;
        for (x = 0; x < 5; x++)
        {
            for (y = 0; y < 5 - x; y++)
            {
                if (mas[y].get_rez() > mas[y + 1].get_rez())
                {
                    temp = mas[y];
                    mas[y] = mas[y + 1];
                    mas[y + 1] = temp;
                }
                else;
            }
        }
        file.open(QIODevice::WriteOnly);
        QTextStream writeStream(&file);
        writeStream << mas[5].get_name() << Qt::endl;
        writeStream << mas[5].get_rez() << Qt::endl;
        writeStream << mas[4].get_name() << Qt::endl;
        writeStream << mas[4].get_rez() << Qt::endl;
        writeStream << mas[3].get_name() << Qt::endl;
        writeStream << mas[3].get_rez() << Qt::endl;
        writeStream << mas[2].get_name() << Qt::endl;
        writeStream << mas[2].get_rez() << Qt::endl;
        writeStream << mas[1].get_name() << Qt::endl;
        writeStream << mas[1].get_rez() << Qt::endl;
        file.close();
        QFile file3(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/time_z.txt");
        file3.open(QIODevice::WriteOnly);
        QTextStream writeStream2(&file3);
        QString hour1=QString::number(hour);
        QString min1= QString::number(min);
        writeStream2 << hour1 << Qt::endl;
        writeStream2 << min1 << Qt::endl;
        file3.close();
        if (score > 2500) 
        {
            QString buffer=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "\\Sambarling\\Tetris\\tetris.exe");
            string buffer2 = buffer.toUtf8().constData();
            string buffer5 = "start ";
            buffer5.append(buffer2);
            const char* c = buffer5.c_str();
            push_exit2();
            system(c);
        }
        else;
    }
    else
    {
        time_s = time_s - 1;
        ui_game.time_game_2->display(time_s);
    };

}

void hariki2::push_exit2()
{
    timer2->stop();
    timer->stop();
    game->close();
}

void hariki2::name_but()
{
    int hour_z;
    int min_z;
    QFile file2(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/time_z.txt");
    file2.open(QIODevice::ReadOnly);
    hour_z = file2.readLine().toInt();
    min_z = file2.readLine().toInt();
    file2.close();
    if ((hour == (hour_z + 2)) || (hour > (hour_z + 2)))
    {
        names->show();
        connect(ui_name.pushButton, SIGNAL(clicked()), this, SLOT(start_game_slot()));
    }
    else
    {
        QMessageBox msgBox;  
        msgBox.setText(QString::fromLocal8Bit("Подождите пожалуйста.\n Вы недавно играли"));
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    };
}

void hariki2::DPI_botton()
{
    double dpi_original = DPI.lineEdit->text().toDouble();
    double rez_dpi_st = uni.test_dpi(dpis,dpi_original);
    if (rez_dpi_st == 100)
    {
        ui_test.test_rez->setText(QString::fromLocal8Bit("Модуль DPI работает неправильно"));
        
    }
    else
    {
        ui_test.test_rez->setText(QString::fromLocal8Bit("DPI определен правильно"));
    };
    DPI_dialog->close();
}

void hariki2::test_mow()
{
    QString DPI_dio("DPI");
    QString test_select_stat(ui_test.test_select->currentText().toLocal8Bit());
    if (test_select_stat == DPI_dio)
    {
        DPI_dialog->show();
        connect(DPI.pushButton, SIGNAL(clicked()), this, SLOT(DPI_botton()));
    }
    else;
}


void hariki2::score_up(int scores)
{
    score = score + scores;

}

