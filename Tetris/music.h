#pragma once
#include <QMediaPlayer>
#include <QDir>
#include <QApplication>
class music
{
public:
	music()
	{

	}
	void set_music();
	void play_music();
	void stop_music();
	int get(int option);
	void set(int option, int init);
private:
	QMediaPlayer aster;
	int temp_music = 1;
	bool status_music = true;
	int time_player = 0;
};

