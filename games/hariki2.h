#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hariki2.h"
#include"ui_record.h"
#include "ui_hariki_and_tetris.h"
#include "windows.h"
#include "winuser.h"
#include "wingdi.h"
#include <QFile>
#include "krug.h"
#include <QTimer>

class hariki2 : public QMainWindow
{
    Q_OBJECT

public:
    hariki2(QWidget *parent = Q_NULLPTR);
    void update(krug a, krug b, krug c, krug d, krug e, krug f, krug g, krug h, krug t);
    krug select_yes(int stav);
    void write_yes(int color, int tone);
    krug krug11;
    krug krug12;
    krug krug13;
    krug krug21;
    krug krug22;
    krug krug23;
    krug krug31;
    krug krug32;
    krug krug33;
    QTimer* timer;
    int pov = 0;
    int povt = 0;
    int yesp;
    int yesp1;
    int yesp2;
private:
    Ui::hariki2Class ui;
    Ui::record_table ui_record;
    Ui::hariki_and_tetrisClass ui_game;

private slots:
    void start_game_slot();
    void record_slot();
    void exit_slot();
    void new_game_slot();
    void slotTimerAlarm();
};
