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
	QString pic11n = ("Зеленый цвет Вердена");
	QString pic12n = ("Сливочный");
	QString pic13n = ("Желтый");
	QString pic14n = ("Бледно-желтый");
	QString pic21n = ("Ао");
	QString pic22n = ("Изумрудный Зеленый");
	QString pic23n = ("Зеленый");
	QString pic24n = ("Неоново-Зеленый");
	QString pic31n = ("Темно-бордовый");
	QString pic32n = ("Гвардеец Красный");
	QString pic33n = ("Красный");
	QString pic34n = ("РУБИНОВО-Красный");
	QString pic41n = ("Красный Бук");
	QString pic42n = ("Роза Шарона");
	QString pic43n = ("Оранжевый цвет безопасности");
	QString pic44n = ("Фламенко");
};
