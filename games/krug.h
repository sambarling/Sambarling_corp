#include <QPixmap>
#include <QDir>
#include <QApplication>
#include <iostream>
#include <ctime>
#include <cstdlib>
class krug
{
public:
	krug()
	{

	}
	QPixmap select_pix(int color,int tone);
	QString select_name_pix(int color, int tone);
	int rand_color();
	int rand_tone();
	void writes(int colors, int tones);
	void init();
	int ver_color();
	int ver_tone();
private:
	int color;
	int tone;
	QPixmap pic11 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Verdun Green.png");
	QPixmap pic12 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Buddha Gold.png");
	QPixmap pic13 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Yellow.png");
	QPixmap pic14 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Daffodil.png");
	QPixmap pic21 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Ao.png");
	QPixmap pic22 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Islamic Green.png");
	QPixmap pic23 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Green.png");
	QPixmap pic24 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Neon Green.png");
	QPixmap pic31 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Maroon.png");
	QPixmap pic32 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Guardsman Red.png");
	QPixmap pic33 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Red.png");
	QPixmap pic34 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/RYB Red.png");
	QPixmap pic41 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Red Beech.png");
	QPixmap pic42 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Rose of Sharon.png");
	QPixmap pic43 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Safety Orange.png");
	QPixmap pic44 = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Flamenco.png");
	QPixmap pic_yes = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/da.png");
	QPixmap pic_no = (QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/net.png");
	QString pic11n = (QString::fromLocal8Bit("Зеленый цвет Вердена"));
	QString pic12n = (QString::fromLocal8Bit("Сливочный"));
	QString pic13n = (QString::fromLocal8Bit("Желтый"));
	QString pic14n = (QString::fromLocal8Bit("Бледно-желтый"));
	QString pic21n = (QString::fromLocal8Bit("Насыщенный оливково-зеленый"));
	QString pic22n = (QString::fromLocal8Bit("Изумрудный Зеленый"));
	QString pic23n = (QString::fromLocal8Bit("Зеленый"));
	QString pic24n = (QString::fromLocal8Bit("Кричащий зеленый"));
	QString pic31n = (QString::fromLocal8Bit("Глубокий красно-коричневый"));
	QString pic32n = (QString::fromLocal8Bit("Сангина"));
	QString pic33n = (QString::fromLocal8Bit("Красный"));
	QString pic34n = (QString::fromLocal8Bit("Насыщенный розовый"));
	QString pic41n = (QString::fromLocal8Bit("Темно-синий"));
	QString pic42n = (QString::fromLocal8Bit("Темный ультрамариновый"));
	QString pic43n = (QString::fromLocal8Bit("Синий"));
	QString pic44n = (QString::fromLocal8Bit("Небесный"));
};
