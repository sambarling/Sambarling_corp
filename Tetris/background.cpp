#include "background.h"

QPixmap background::select_picture()
{
	if (pictures == 1) 
	{
		pictures = pictures + 1;
		return pic11;
	}
	else if (pictures == 2)
	{
		pictures = pictures + 1;
		return pic21;
	}
	else
	{
		pictures = 1;
		return pic31;
	}
}

QPixmap background::picture_pic2()
{
	if (pictures == 1) return pic12;
	else if (pictures == 2) return pic22;
	else return pic32;
}
