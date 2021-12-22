#pragma once
#include <QPixmap>
#include <QDir>
#include <QApplication>
class background
{
public:
	background()
	{

	}
	QPixmap select_picture();
	QPixmap picture_pic2();
private:
	QPixmap pic11=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon1.png");
	QPixmap pic12=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon11.jpg");
	QPixmap pic21=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon2.jpg");
	QPixmap pic22=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon21.png");
	QPixmap pic31=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon3.png");
	QPixmap pic32=(QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/fon31.png");
	int pictures = 1;
	int test;
};

