#include "tetris.h"

tetris::tetris(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    timer = new QTimer();
    timer_music = new QTimer();
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int secs = ltm->tm_sec;
    srand(secs);
    connect(ui.about, SIGNAL(clicked()), this, SLOT(about_botton()));
    connect(ui.change, SIGNAL(clicked()), this, SLOT(change_botton()));
    connect(ui.games, SIGNAL(clicked()), this, SLOT(start_game()));
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    connect(timer_music, SIGNAL(timeout()), this, SLOT(music_autopot()));
    connect(ui.music, SIGNAL(clicked()), this, SLOT(music_botton()));
    ui.pic2->setPixmap(back.picture_pic2());
    ui.pic1->setPixmap(back.select_picture());
    world_music.play_music();
    ui.music->setText("pause");
    timer_music->start(world_music.get(69));
    QFile file(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/rez5.txt");
    file.open(QIODevice::ReadOnly);
    ui.table->setItem(0, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(0, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(1, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(1, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(2, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(2, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(3, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(3, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(4, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(4, 1, new QTableWidgetItem(QString(file.readLine())));
    file.close();
}
void tetris::about_botton()
{
    QMessageBox msgBox;
    msgBox.setWindowIcon(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/avatar.png"));
    msgBox.setIconPixmap(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/spy.png"));
    msgBox.setWindowTitle(QString::fromLocal8Bit("О программе"));
    msgBox.setText(QString::fromLocal8Bit("Игру для вас писали:\n\nЖукова Елизавета\nПышненко Надежда\nТырин Владимир\nЦапиев Дмитрий\n\n\nВерсия игры:  v1.3(dec_2021)  64-bit "));
    msgBox.exec();
}

/*
* тесты
* ui.score->display(1000);
*/

void tetris::change_botton()
{
    ui.pic2->setPixmap(back.picture_pic2());
    ui.pic1->setPixmap(back.select_picture());
}

void tetris::start_game()
{
    key_detect = false;
    key_detect2 = false;
    ui.Name->setEnabled(0);
    ui.change->setEnabled(0);
    ui.change->setEnabled(0);
    ui.games->setEnabled(0);
    ui.music ->setEnabled(0);
    ui.about->setEnabled(0);
    polest.new_pole();
    tetris::update();
    ui.score->display(0);
    playstat.start_game();
    timer->start(playstat.get_speed());
    polest.new_figure(playstat.get_el());
    playstat.ren();
    ui.pic3->setPixmap(playstat.get_alement(playstat.get_el()));
    tetris::update();
}
//playstat.get_el()

QBrush tetris::sets_brush(int xs, int xy)
{
    QBrush pic1(QColor::fromRgb(255, 255, 255));
    QBrush pic2(QColor::fromRgb(255, 0, 0));
    QBrush pic3(QColor::fromRgb(0, 191, 255));
    QBrush pic4(QColor::fromRgb(173, 255, 47));
    QBrush pic5(QColor::fromRgb(0, 0, 255));
    QBrush pic6(QColor::fromRgb(255, 0, 255));
    QBrush pic7(QColor::fromRgb(65, 105, 225));
    QBrush pic8(QColor::fromRgb(107, 117, 251));
    int temp = polest.gety(xs,xy);
    if (temp == 0)return pic1;
    else if (temp == 1) return pic2;
    else if (temp == 2)return pic3;
    else if (temp == 3)return pic4;
    else if (temp == 4)return pic5;
    else if (temp == 5)return pic6;
    else if (temp == 6)return pic7;
    else return pic8;
}

void tetris::end_game()
{
    QMessageBox msgBox;
    msgBox.setWindowIcon(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/avatar.png"));
    msgBox.setIconPixmap(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/over.png"));
    msgBox.setWindowTitle(QString::fromLocal8Bit("Вот и все ребята"));
    msgBox.setText(QString::fromLocal8Bit("Игра окончена.\n\n\nЕще раз сыграем?"));
    msgBox.exec();
    table_update();
    ui.Name->setEnabled(1);
    ui.change->setEnabled(1);
    ui.change->setEnabled(1);
    ui.games->setEnabled(1);
    ui.about->setEnabled(1);
    ui.music->setEnabled(1);
}

void tetris::table_update()
{
    table_itemtetris mas[6];
    QTableWidgetItem* item1=ui.table->item(0,0);
    QTableWidgetItem* item2 = ui.table->item(0, 1);
    QTableWidgetItem* item3 = ui.table->item(1, 0);
    QTableWidgetItem* item4 = ui.table->item(1, 1);
    QTableWidgetItem* item5 = ui.table->item(2, 0);
    QTableWidgetItem* item6 = ui.table->item(2, 1);
    QTableWidgetItem* item7 = ui.table->item(3, 0);
    QTableWidgetItem* item8 = ui.table->item(3, 1);
    QTableWidgetItem* item9 = ui.table->item(4, 0);
    QTableWidgetItem* item10 = ui.table->item(4, 1);
    QString names;
    QString fiks("\n");
    names = ui.Name->text();
    names = names + fiks;
    int scores2;
    scores2 = ui.score->intValue();
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
            if (mas[y].get_rez()>mas[y+1].get_rez())
            {
                temp = mas[y];
                mas[y] = mas[y + 1];
                mas[y + 1] = temp;
            }
            else;
        }
    }
    QFile file(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/rez5.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream writeStream(&file);
    writeStream << mas[5].get_name() << endl;
    writeStream << mas[5].get_rez() << endl;
    writeStream << mas[4].get_name() << endl;
    writeStream << mas[4].get_rez() << endl;
    writeStream << mas[3].get_name() << endl;
    writeStream << mas[3].get_rez() << endl;
    writeStream << mas[2].get_name() << endl;
    writeStream << mas[2].get_rez() << endl;
    writeStream << mas[1].get_name() << endl;
    writeStream << mas[1].get_rez() << endl;
    file.close();
    file.open(QIODevice::ReadOnly);
    ui.table->setItem(0, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(0, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(1, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(1, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(2, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(2, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(3, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(3, 1, new QTableWidgetItem(QString(file.readLine())));
    ui.table->setItem(4, 0, new QTableWidgetItem(QString(file.readLine())));
    file.readLine();
    ui.table->setItem(4, 1, new QTableWidgetItem(QString(file.readLine())));
    file.close();
}

void tetris::paintEvent(QPaintEvent*)
{
    QPainter plane(this);
    QRect g1 = ui.centralWidget->geometry();
    QRect g2 = ui.gamepoll->geometry();
    const int xLeft = g1.left() + g2.left() + ui.gamepoll->lineWidth() + 1+65;
    const int yTop = g1.top() + g2.top() + ui.gamepoll->lineWidth() + 1;
    plane.drawRect(QRect(xLeft, yTop,300,601));
    for (int i = 0; i < 20; ++i)
        for (int j = 4; j < 14; ++j) 
        {
plane.setBrush(sets_brush(j,i));
plane.drawRoundedRect(QRect(xLeft + (j-4)*30,yTop + i*30,30, 30), 0, 0);
        }
}

void tetris::slotTimerAlarm()
{
    if (key_detect == false)
    {
        key_detect2 = true;
        bool temp;
        bool temp2;
        bool temp3 = true;
        int temp4;
        temp = polest.down_figure();
        if (temp == true)
        {
            temp3 = polest.new_figure(playstat.get_el());
            playstat.ren();
            ui.pic3->setPixmap(playstat.get_alement(playstat.get_el()));
            temp2 = polest.score_app();
            if (temp2 == true)
            {
                temp4 = polest.line_remove();
                playstat.score_up(temp4);
                ui.score->display(playstat.get_scores());

            }
            int dfg = 46;
        }
        else;
        polest.relife();
        tetris::update();
        if (temp3 == false)
        {
            timer->stop();
            end_game();
        }
        key_detect2 = false;
        timer->start(playstat.get_speed());
    }
    else
    {
        timer->start(1);
    }
}
//   playstat.score_up();
//ui.score->display(playstat.get_scores());
void tetris::music_botton()
{
    if (world_music.get(2) == true)
    {
        world_music.stop_music();
        ui.music->setText("play");
    }
    else
    {
        switch (world_music.get(1))
        {
        case 1:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 2:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 3:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 4:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 5:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 6:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 7:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 8:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 9:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 10:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 11:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        case 12:
            world_music.play_music();
            ui.music->setText("pause");
            timer_music->start(world_music.get(69));
            break;
        }
    }
}

void tetris::music_autopot()
{
    if (world_music.get(50) == 1)
    {
        world_music.play_music();
        timer_music->start(world_music.get(69));
    }
    else;
}

void tetris::keyPressEvent(QKeyEvent* event)
{
    quint32 key_active;
    key_active=event->nativeScanCode();
    switch (key_active) 
    {
    case 331: // Двигаем фигуру влево
        if (key_detect2 == false)
        {
            key_detect = true;
            //timer->stop();
            polest.key_left();
            //timer->start(playstat.get_speed());
            tetris::update();
            key_detect = false;
        }
        else;
        break;

    case 333: // Двигаем фигуру вправо
        if (key_detect2 == false)
        {
            key_detect = true;
            //timer->stop();
            polest.key_right();
            //timer->start(playstat.get_speed());
            tetris::update();
            key_detect = false;
        }
        break;

    case 328: // Пробел - повернуть фигуру
        if (key_detect2 == false)
        {
            key_detect = true;
            //timer->stop();
            polest.key_up(polest.status_active());
            //timer->start(playstat.get_speed());
            polest.relife();
            tetris::update();
            key_detect = false;
        }
        else;
        break;
    case 336:
        if (key_detect2 == false)
        {
            key_detect = true;
            //timer->stop();
            bool temp;
            bool temp2;
            bool temp3;
            int temp4;
            temp3 = true;
            temp = polest.down_figure();
            if (temp == true)
            {
                temp3 = polest.new_figure(playstat.get_el());
                playstat.ren();
                ui.pic3->setPixmap(playstat.get_alement(playstat.get_el()));
                temp2 = polest.score_app();
                ui.score->display(playstat.get_scores());
                if (temp2 == true)
                {
                    temp4 = polest.line_remove();
                    playstat.score_up(temp4);
                    ui.score->display(playstat.get_scores());

                }
                int dfg = 46;
            }
            else;
           // timer->start(playstat.get_speed());
            if (temp3 == false)
            {
                timer->stop();
                end_game();
            }
            polest.relife();
            tetris::update();
            key_detect = false;
        }
        break;
    case 25:
        music_botton();
        break;
    case 19:
        start_game();
        break;
    case 1:
            timer->stop();
            QMessageBox msgBox;
            msgBox.setWindowIcon(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/avatar.png"));
            msgBox.setWindowTitle(QString::fromLocal8Bit("K-менеджер"));
            msgBox.setIconPixmap(QPixmap(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/tea.png"));
            msgBox.setText(QString::fromLocal8Bit("Когда вы закончите отдыхать на своем кресле с чашкой мятного чая нажмите кнопку 'OK'"));
            msgBox.exec();
            timer->start(playstat.get_speed());
        break;
    }
}