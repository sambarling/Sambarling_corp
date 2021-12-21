#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tetris.h"
#include <QMessageBox>
#include "background.h"
#include"player_score.h"
#include <QPainter>
#include <QMap>
#include"pole.h"
#include"figure.h"
#include <QBrush>
#include <QTimer>
#include <QTime>
#include <QKeyEvent>
#include"music.h"
#include <conio.h>
#include"table_itemtetris.h"


class tetris : public QMainWindow
{
    Q_OBJECT

public:
    tetris(QWidget* parent = Q_NULLPTR);

private:
    Ui::tetrisClass ui;
    QTimer* timer;
    QTimer* timer_music;
    music world_music;
    background back;
    player_score playstat;
    void paintEvent(QPaintEvent*);
    void keyPressEvent(QKeyEvent* event);
    pole polest;
    QBrush sets_brush(int xs, int xy);
    void end_game();
    void table_update();
    bool key_detect=false;
    bool key_detect2 = false;
private slots:
    void about_botton();
    void change_botton();
    void start_game();
    void slotTimerAlarm();
    void music_botton();
    void music_autopot();
};