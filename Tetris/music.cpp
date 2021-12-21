#include "music.h"

void music::set_music()
{
    //temp_music
    switch (temp_music)
    {
    case 1:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays1.mp3"));
        aster.play();
        status_music = true;
        time_player = 225000;
        break;
    case 2:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays2.mp3"));
        aster.play();
        status_music = true;
        time_player = 144000;
        break;
    case 3:
       aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays3.mp3"));
        aster.play();
        status_music = true;
        time_player = 168000;
        break;
    case 4:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays4.mp3"));
       aster.play();
        status_music = true;
        time_player = 168000;
        break;
    case 5:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays5.mp3"));
        aster.play();
        status_music = true;
        time_player = 168000;
        break;
    case 6:
       aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays6.mp3"));
        aster.play();
        status_music = true;
        time_player = 156000;
        break;
    case 7:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays7.mp3"));
        aster.play();
        status_music = true;
        time_player = 148000;
        break;
    case 8:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays8.mp3"));
        aster.play();
        status_music = true;
        time_player = 173000;
        break;
    case 9:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays9.mp3"));
        aster.play();
        status_music = true;
        time_player = 155000;
        break;
    case 10:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays10.mp3"));
        aster.play();
        status_music = true;
        time_player = 170000;
        break;
    case 11:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays11.mp3"));
        aster.play();
        status_music = true;
        time_player = 220000;
        break;
    case 12:
        aster.setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/plays12.mp3"));
        aster.play();
        status_music = true;
        time_player = 221000;
        break;
    }
}

void music::play_music()
{
    int temp;
    temp = rand() % 12 + 1;
    set(1, temp);
    set_music();
	aster.play();
	status_music = true;
}

void music::stop_music()
{
	aster.stop();
	status_music = false;
}

int music::get(int option)
{
    if (option == 1) return temp_music;
    else if (option == 69) return time_player;
    else if (option == 50) return status_music;
    else return status_music;
}

void music::set(int option, int init)
{
    if (option == 1) temp_music = init;
    else if (option == 69) time_player = init;
    else status_music = init;
}
