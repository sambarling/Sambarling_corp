#include "krug.h"

QPixmap krug::select_pix(int color, int tone)
{
	switch (color)
	{
	case 1:
		switch (tone)
		{
		case 1:
			return pic11;
			break;
		case 2:
			return pic12;
			break;
		case 3:
			return pic13;
			break;
		case 4:
			return pic14;
			break;
		}
		break;
	case 2:
		switch (tone)
		{
		case 1:
			return pic21;
			break;
		case 2:
			return pic22;
			break;
		case 3:
			return pic23;
			break;
		case 4:
			return pic24;
			break;
		}
		break;
	case 3:
		switch (tone)
		{
		case 1:
			return pic31;
			break;
		case 2:
			return pic32;
			break;
		case 3:
			return pic33;
			break;
		case 4:
			return pic34;
			break;
		}
		break;
	case 4:
		switch (tone)
		{
		case 1:
			return pic41;
			break;
		case 2:
			return pic42;
			break;
		case 3:
			return pic43;
			break;
		case 4:
			return pic44;
			break;
		}
		break;
	case 5:
		switch (tone)
		{
		case 1:
			return pic_yes;
			break;
		case 2:
			return pic_no;
			break;
		}
	}
}

QString krug::select_name_pix(int color, int tone)
{
	switch (color)
	{
	case 1:
		switch (tone)
		{
		case 1:
			return pic11n;
			break;
		case 2:
			return pic12n;
			break;
		case 3:
			return pic13n;
			break;
		case 4:
			return pic14n;
			break;
		}
		break;
	case 2:
		switch (tone)
		{
		case 1:
			return pic21n;
			break;
		case 2:
			return pic22n;
			break;
		case 3:
			return pic23n;
			break;
		case 4:
			return pic24n;
			break;
		}
		break;
	case 3:
		switch (tone)
		{
		case 1:
			return pic31n;
			break;
		case 2:
			return pic32n;
			break;
		case 3:
			return pic33n;
			break;
		case 4:
			return pic34n;
			break;
		}
		break;
	case 4:
		switch (tone)
		{
		case 1:
			return pic41n;
			break;
		case 2:
			return pic42n;
			break;
		case 3:
			return pic43n;
			break;
		case 4:
			return pic44n;
			break;
		}
		break;
	}
}

int krug::rand_color()
{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		int secs=ltm->tm_sec;
		int sl = rand();
		sl = sl % 4;
		if (sl == 0) sl = 4;
		else;
		return sl;
}

int krug::rand_tone()
{
	int sl = rand();
	sl = sl % 4;
	if (sl == 0) sl = 4;
	else;
	return sl;
}

void krug::writes(int colors, int tones)
{
	color = colors;
	tone = tones;
}

void krug::init()
{
	int cl;
	int ot;
	cl = rand_tone();
	ot = rand_tone();
	writes(cl, ot);
}

int krug::ver_color()
{
	return color;
}

int krug::ver_tone()
{
	return tone;
}
