#pragma once
#include <QPixmap>
#include <QDir>
#include <QApplication>
class player_score
{
public:
	player_score()
	{

	}
	QPixmap get_alement(int element);
	void start_game();
	int get_el();
	void ren();
	void score_up(int item);
	int get_speed();
	int get_scores();
private:
	int scores = 0;
	int element;
	int speed=600;
	QPixmap pic1 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/1.jpg");
	QPixmap pic2 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/2.jpg");
	QPixmap pic3 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/3.jpg");
	QPixmap pic4 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/4.jpg");
	QPixmap pic5 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/5.jpg");
	QPixmap pic6 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/6.jpg");
	QPixmap pic7 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/7.jpg");
};

