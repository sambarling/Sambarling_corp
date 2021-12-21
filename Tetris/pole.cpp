#include "pole.h"

int pole::gety(int xy, int yx)
{
	return get_kletka(1,xy,yx);
}

int pole::get_active(int xy, int yx)
{
	return get_kletka(0,xy,yx);
}

void pole::set_active(int option, int xy, int yx, int num)
{
	set_kletka(option, xy, yx, num);
}

bool pole::down_figure()
{
	int x;
	int y;
	for (x = 13; x > -1; x--)
	{
		for (y = 19; y > -1; y--)
		{
			if (((y == 19) & (get_kletka(0, x, y) == 1)) || check_alerm(y))
			{
				x = -2;
				y = -2;
				close_figure();
				return true;
			}
			//
			else if (((y != 19) & (get_kletka(0, x, y) == 1)) || ((y != 19) & (get_kletka(20, x, y) == 1)))
			{
				if ((get_kletka(20, x, y) == 1)&((get_kletka(0,x,y+1)==2)||(get_kletka(0, x, y) == 2)))
				{
					set_active(20, x, y, 0);
					set_active(20, x, y+1, 1);
				}
				else
				{
					//set_active(20, x, y, 0);
					//set_active(20, x, y, 1);
					copy_kletka(x, y + 1, x, y);
					set_kletka("null", x, y);
					if ((get_active(x, y + 1) == 3) || (get_kletka(20, x, y + 1) == 1));
					else (set_active(0, x, y + 1, 3));
				}
			}
			else;
		}
	}
	for (x = 13; x > -1; x--)
	{
		for (y = 19; y > -1; y--)
		{
			if (get_active(x, y) == 3)
				set_active(0,x,y,1);
			else;
		}
	}
	return false;
}

void pole::close_figure()
{
	int x;
	int y;
	for (x = 13; x > -1; x--)
	{
		for (y = 19; y > -1; y--)
		{
			int test1;
			test1 = get_active(x, y);
			int ttt = 4;
			if ((get_active(x, y) == 1))
			{
				set_active(0, x, y, 2);
			}
			else;
			if (get_kletka(20, x, y) == 1)
			{
				set_active(20, x, y, 0);
			}
			else;
		}
	}
	status_pov = false;
}

bool pole::check_alerm(int x)
{
	int temp = 9;
	for (int temp100 = 19; temp100 > -1; temp100--)
	{
		for (temp = 13; temp > 3; temp--)
		{
			if (((get_active(temp, temp100) == 2) & (get_active(temp, temp100 - 1) == 1)) || ((get_active(temp, temp100) == 1) & (temp100 == 19)))
				return true;
		}
	}
	return false;
}

void pole::new_pole()
{
	int x;
	int y;
	for (x = 13; x > -1; x--)
	{
		for (y = 19; y > -1; y--)
		{
				set_active(1, x, y, 0);
				set_active(0, x, y, 0);
				set_active(20, x, y, 0);
		}
	}
}

void pole::key_left()
{
	int x;
	int y;
	for (x = 0; x < 14; x++)
	{
		for (y = 19; y > -1; y--)
		{
			if (((((x > 4)||(x==4)) & ((get_kletka(0, x, y) == 1)||((get_kletka(20,x,y)==1)))) & check_alerm_left(x))||((x > 4)&(x==4))&(get_kletka(20, x, y) == 1))
			{
				if ((get_kletka(20, x, y) == 1) & ((get_kletka(0, x-1, y) == 2) || (get_kletka(0, x, y) == 2)))
				{
					set_active(20, x, y, 0);
					set_active(20, x-1, y, 1);
				}
				else
				{
					copy_kletka(x - 1, y, x, y);
					set_kletka("null", x, y);
				}
			}
			else;
			if (check_alerm_left(x)==false)
			{
				x = 20;
				y = -10;
			}
		}
	}
}

void pole::key_right()
{
	int x;
	int y;
	for (x = 13; x > 0; x--)
	{
		for (y = 19; y > -1; y--)
		{
			if ((((x != 13) & (get_kletka(0, x, y) == 1)) & check_alerm_right(x))||(x != 13)&(get_kletka(20, x, y) == 1))
			{
				if ((get_kletka(20, x, y) == 1) & ((get_kletka(0, x+1, y) == 2) || (get_kletka(0, x, y) == 2)))
				{
					set_active(20, x, y, 0);
					set_active(20, x+1, y, 1);
				}
				else
				{
					copy_kletka(x + 1, y, x, y);
					set_kletka("null", x, y);
				}
			}
			else;
			if (check_alerm_right(x) == false)
			{
				x = -10;
				y = -10;
			}
		}
	}
}

void pole::key_up(bool rez)
{
	int x;
	int y;
	x = get_navigator_x();// это 0
	y = get_navigator_y();// да да и это тоже 0
	bool AD00 = false;
	bool AD10 = false;
	bool AD20 = false;
	bool AD30 = false;
	bool AD01 = false;
	bool AD11 = false;
	bool AD21 = false;
	bool AD31 = false;
	bool AD02 = false;
	bool AD12 = false;
	bool AD22 = false;
	bool AD32 = false;
	bool AD03 = false;
	bool AD13 = false;
	bool AD23 = false;
	bool AD33 = false;
	bool AD00K = false;
	bool AD10K = false;
	bool AD20K = false;
	bool AD30K = false;
	bool AD01K = false;
	bool AD11K = false;
	bool AD21K = false;
	bool AD31K = false;
	bool AD02K = false;
	bool AD12K = false;
	bool AD22K = false;
	bool AD32K = false;
	bool AD03K = false;
	bool AD13K = false;
	bool AD23K = false;
	bool AD33K = false;
	bool AD00KI = false;
	bool AD10KI = false;
	bool AD20KI = false;
	bool AD30KI = false;
	bool AD01KI = false;
	bool AD11KI = false;
	bool AD21KI = false;
	bool AD31KI = false;
	bool AD02KI = false;
	bool AD12KI = false;
	bool AD22KI = false;
	bool AD32KI = false;
	bool AD03KI = false;
	bool AD13KI = false;
	bool AD23KI = false;
	bool AD33KI = false;
	bool check_alarm = false;
	int checl_list = 0;
	int checl_list_er = 0;
	bool manager;
	manager = 1;
	if (manager == true)
	{
		if ((get_active(0 + x, 0 + y) == 1) & ((get_active(0 + x, 3 + y) == 0)) & (((0 + x) < 14)&((0+x)>3)) & ((3 + y) < 20)) {
			AD00 = true;
		}
		else if ((get_active(0 + x, 0 + y) == 1) & ((get_active(0 + x, 3 + y) == 1)) & (((0 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) AD00K = true;
		if ((get_active(1 + x, 0 + y) == 1) & (get_active(0 + x, 2 + y) == 0) & (((1 + x) < 14) & ((0 + x) > 3)) & ((2 + y) < 20)) {
			AD10 = true;
		}
		else if ((get_active(1 + x, 0 + y) == 1) & (get_active(0 + x, 2 + y) == 1) & (((1 + x) < 14) & ((0 + x) > 3)) & ((2 + y) < 20)) AD10K = true;
		if ((get_active(2 + x, 0 + y) == 1) & (get_active(0 + x, 1 + y) == 0) & (((2 + x) < 14) & ((0 + x) > 3)) & ((1 + y) < 20)) {
			AD20 = true;
		}
		else if ((get_active(2 + x, 0 + y) == 1) & (get_active(0 + x, 1 + y) == 1) & (((2 + x) < 14) & ((0 + x) > 3)) & ((1 + y) < 20)) AD20K = true;
		if ((get_active(3 + x, 0 + y) == 1) & (get_active(0 + x, 0 + y) == 0) & (((3 + x) < 14) & ((0 + x) > 3)) & ((0 + y) < 20)) {
			AD30 = true;

		}
		else if ((get_active(3 + x, 0 + y) == 1) & (get_active(0 + x, 0 + y) == 1) & (((3 + x) < 14) & ((0 + x) > 3)) & ((0 + y) < 20))AD30K = true;
		if ((get_active(0 + x, 1 + y) == 1) & (get_active(1 + x, 3 + y) == 0) & (((1 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) {
			AD01 = true;
		}
		else if ((get_active(0 + x, 1 + y) == 1) & (get_active(1 + x, 3 + y) == 1) & (((1 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) AD01K = true;
		if ((get_active(1 + x, 1 + y) == 1) & (get_active(1 + x, 2 + y) == 0) & (((1 + x) < 14) & ((1 + x) > 3)) & ((2 + y) < 20)) {
			AD11 = true;
		}
		else if ((get_active(1 + x, 1 + y) == 1) & (get_active(1 + x, 2 + y) == 1) & (((1 + x) < 14) & ((1 + x) > 3)) & ((2 + y) < 20)) AD11K = true;
		if ((get_active(2 + x, 1 + y) == 1) & (get_active(1 + x, 1 + y) == 0) & (((2 + x) < 14) & ((1 + x) > 3)) & ((1 + y) < 20)) {
			AD21 = true;
		}
		else if ((get_active(2 + x, 1 + y) == 1) & (get_active(1 + x, 1 + y) == 1) & (((2 + x) < 14) & ((1 + x) > 3)) & ((1 + y) < 20)) AD21K = true;
		if ((get_active(3 + x, 1 + y) == 1) & (get_active(1 + x, 0 + y) == 0) & (((3 + x) < 14) & ((1 + x) > 3)) & ((1 + y) < 20)) {
			AD31 = true;
		}
		else if ((get_active(3 + x, 1 + y) == 1) & (get_active(1 + x, 0 + y) == 1) & (((3 + x) < 14) & ((1 + x) > 3)) & ((1 + y) < 20)) AD31K = true;
		if ((get_active(0 + x, 2 + y) == 1) & (get_active(2 + x, 3 + y) == 0) & (((2 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) {
			AD02 = true;
		}
		else if ((get_active(0 + x, 2 + y) == 1) & (get_active(2 + x, 3 + y) == 1) & (((2 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) AD02K = true;
		if ((get_active(1 + x, 2 + y) == 1) & (get_active(2 + x, 2 + y) == 0) & (((2 + x) < 14) & ((1 + x) > 3)) & ((2 + y) < 20)) {
			AD12 = true;
		}
		else if ((get_active(1 + x, 2 + y) == 1) & (get_active(2 + x, 2 + y) == 1) & (((2 + x) < 14) & ((1 + x) > 3)) & ((2 + y) < 20)) AD12K = true;
		if ((get_active(2 + x, 2 + y) == 1) & (get_active(2 + x, 1 + y) == 0) & (((2 + x) < 14) & ((2 + x) > 3)) & ((2 + y) < 20)) {
			AD22 = true;

		}
		else if ((get_active(2 + x, 2 + y) == 1) & (get_active(2 + x, 1 + y) == 1) & (((2 + x) < 14) & ((2 + x) > 3)) & ((2 + y) < 20)) AD22K = true;
		if ((get_active(3 + x, 2 + y) == 1) & (get_active(2 + x, 0 + y) == 0) & (((3 + x) < 14) & ((2 + x) > 3)) & ((2 + y) < 20)) {
			AD32 = true;
		}
		else if ((get_active(3 + x, 2 + y) == 1) & (get_active(2 + x, 0 + y) == 1) & (((3 + x) < 14) & ((2 + x) > 3)) & ((2 + y) < 20)) AD32K = true;
		if ((get_active(0 + x, 3 + y) == 1) & (get_active(3 + x, 3 + y) == 0) & (((3 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) {
			AD03 = true;
		}
		else if ((get_active(0 + x, 3 + y) == 1) & (get_active(3 + x, 3 + y) == 1) & (((3 + x) < 14) & ((0 + x) > 3)) & ((3 + y) < 20)) AD03K = true;
		if ((get_active(1 + x, 3 + y) == 1) & (get_active(3 + x, 2 + y) == 0) & (((3 + x) < 14) & ((1 + x) > 3)) & ((3 + y) < 20)) {
			AD13 = true;
		}
		else if ((get_active(1 + x, 3 + y) == 1) & (get_active(3 + x, 2 + y) == 1) & (((3 + x) < 14) & ((1 + x) > 3)) & ((3 + y) < 20)) AD13K = true;
		if ((get_active(2 + x, 3 + y) == 1) & (get_active(3 + x, 1 + y) == 0) & (((3 + x) < 14) & ((2 + x) > 3)) & ((3 + y) < 20)) {
			AD23 = true;
		}
		else if ((get_active(2 + x, 3 + y) == 1) & (get_active(3 + x, 1 + y) == 1) & (((3 + x) < 14) & ((2 + x) > 3)) & ((3 + y) < 20)) AD23K = true;
		if ((get_active(3 + x, 3 + y) == 1) & (get_active(3 + x, 0 + y) == 0) & (((3 + x) < 14) & ((3 + x) > 3)) & ((3 + y) < 20)) {
			AD33 = true;
		}
		else if ((get_active(3 + x, 3 + y) == 1) & (get_active(3 + x, 0 + y) == 1) & (((3 + x) < 14) & ((3 + x) > 3)) & ((3 + y) < 20)) AD33K = true;
		if ((AD00 == true) || (AD00K == true))
		{
			checl_list = checl_list + 1;
			if (AD00K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
		}
		if ((AD10 == true) || (AD10K == true))
		{
			checl_list = checl_list + 1;
			if (AD10K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
		}
		if ((AD20 == true) || (AD20K == true))
		{
			checl_list = checl_list + 1;
			if (AD20K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
		}
		if ((AD30 == true) || (AD30K == true))
		{
			checl_list = checl_list + 1;
			if (AD30K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
		}
		if ((AD01 == true) || (AD01K == true))
		{
			checl_list = checl_list + 1;
			if (AD01K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
		}
		if ((AD11 == true) || (AD11K == true))
		{
			if (AD11K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD21 == true) || (AD21K == true))
		{
			if (AD21K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD31 == true) || (AD31K == true))
		{
			if (AD31K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD02 == true) || (AD02K == true))
		{
			if (AD02K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD12 == true) || (AD12K == true))
		{
			if (AD12K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD22 == true) || (AD22K == true))
		{
			if (AD22K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD32 == true) || (AD32K == true))
		{
			if (AD32K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD03 == true) || (AD03K == true))
		{
			if (AD03K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD13 == true) || (AD13K == true))
		{
			if (AD13K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD23 == true) || (AD23K == true))
		{
			if (AD23K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((AD33 == true) || (AD33K == true))
		{
			if (AD33K == true)
			{
				checl_list_er = checl_list_er + 1;
			}
			checl_list = checl_list + 1;
		}
		if ((checl_list == 4)&(checl_list_er<4))
		{
			if ((AD00 == true))
			{
				//copy_temp(546, 0 + x, 3 + y);
				copy_kletka(0 + x, 3 + y, 0 + x, 0 + y);
				set_kletka("null", x, y);
			}
			if (AD10 == true)
			{
				//copy_temp(546, 0 + x, 2 + y);
				copy_kletka(0 + x, 2 + y, 1 + x, 0 + y);
				set_kletka("null", 1+x, y);
			}
			if (AD20 == true)
			{
				//copy_temp(546, 0 + x, 1 + y);
				copy_kletka(0 + x, 1 + y, 2 + x, 0 + y);
				set_kletka("null", x+2, y);
			}
			if ((AD30 == true))
			{
				//copy_temp(546, 0 + x, 0 + y);
				copy_kletka(0 + x, 0 + y, 3 + x, 0 + y);
				set_kletka("null", x+3, y);
			}
			if (AD01 == true)
			{
				//copy_temp(546, 1 + x, 3 + y);
				copy_kletka(1 + x, 3 + y, 0 + x, 1 + y);
				set_kletka("null", x, y+1);
			}
			if (AD11 == true)
			{
				//copy_temp(546, 1 + x, 2 + y);
				copy_kletka(1 + x, 2 + y, 1 + x, 1 + y);
				set_kletka("null", x+1, y+1);
			}
			if (AD21 == true)
			{
				//copy_temp(546, 1 + x, 1 + y);
				copy_kletka(1 + x, 1 + y, 2 + x, 1 + y);
				set_kletka("null", x+2, y+1);
			}
			if (AD31 == true)
			{
				//copy_temp(546, 1 + x, 0 + y);
				copy_kletka(1 + x, 0 + y, 3 + x, 1 + y);
				set_kletka("null", x+3, y+1);
			}
			if (AD02 == true)
			{
				//copy_temp(546, 2 + x, 3 + y);
				copy_kletka(2 + x, 3 + y, 0 + x, 2 + y);
				set_kletka("null", x, y+2);
			}
			if (AD12 == true)
			{
				//copy_temp(546, 2 + x, 2 + y);
				copy_kletka(2 + x, 2 + y, 1 + x, 2 + y);
				set_kletka("null", x+1, y+2);
			}
			if (AD22 == true)
			{
				//copy_temp(546, 2 + x, 1 + y);
				copy_kletka(2 + x, 1 + y, 2 + x, 2 + y);
				set_kletka("null", x+2, y+2);
			}
			if (AD32 == true)
			{
				//copy_temp(546, 2 + x, 0 + y);
				copy_kletka(2 + x, 0 + y, 3 + x, 2 + y);
				set_kletka("null", x+3, y+2);
			}
			if ((AD03 == true))
			{
				//copy_temp(546, 3 + x, 3 + y);
				copy_kletka(3 + x, 3 + y, 0 + x, 3 + y);
				set_kletka("null", x, y+3);
			}
			if ((AD13 == true))
			{
				//copy_temp(546, 3 + x, 2 + y);
				copy_kletka(3 + x, 2 + y, 1 + x, 3 + y);
				set_kletka("null", x+1, y+3);
			}
			if ((AD23 == true))
			{
				//copy_temp(546, 3 + x, 1 + y);
				copy_kletka(3 + x, 1 + y, 2 + x, 3 + y);
				set_kletka("null", x+2, y+3);
			}
			if ((AD33 == true))
			{
				//copy_temp(546, 3 + x, 0 + y);
				copy_kletka(3 + x, 0 + y, 3 + x, 3 + y);
				set_kletka("null", x+3, y+3);
			}
			if ((AD00K == true))
			{
				AD00KI = AD03K;
				if (AD00KI == true);
				else
				{
					//copy_temp(546, 0 + x, 3 + y);
					copy_kletka(0 + x, 3 + y, 0 + x, 0 + y);
					set_kletka("null", x, y);
				}
			}
			if (AD10K == true)
			{
				AD10KI = AD02K;
				if (AD10KI == true);
				else {
					//copy_temp(546, 0 + x, 2 + y);
					copy_kletka(0 + x, 2 + y, 1 + x, 0 + y);
					set_kletka("null", 1 + x, y);
				}
			}
			if (AD20K == true)
			{
				AD20KI = AD01K;
				if (AD20KI == true);
				else {
					//copy_temp(546, 0 + x, 1 + y);
					copy_kletka(0 + x, 1 + y, 2 + x, 0 + y);
					set_kletka("null", x + 2, y);
				}
			}
			if ((AD30K == true))
			{
				AD30KI = AD00K;
				if (AD30KI == true);
				else {
					//copy_temp(546, 0 + x, 0 + y);
					copy_kletka(0 + x, 0 + y, 3 + x, 0 + y);
					set_kletka("null", x + 3, y);
				}
			}
			if (AD01K == true)
			{
				AD01KI = AD13K;
				if (AD01KI == true);
				else {
					//copy_temp(546, 1 + x, 3 + y);
					copy_kletka(1 + x, 3 + y, 0 + x, 1 + y);
					set_kletka("null", x, y + 1);
				}
			}
			if (AD11K == true)
			{
				AD11KI = AD12K;
				if (AD11KI == true);
				else {
					//copy_temp(546, 1 + x, 2 + y);
					copy_kletka(1 + x, 2 + y, 1 + x, 1 + y);
					set_kletka("null", x + 1, y + 1);
				}
			}
			if (AD21K == true)
			{
				AD21KI = AD11K;
				if (AD21KI == true);
				else {
					//copy_temp(546, 1 + x, 1 + y);
					copy_kletka(1 + x, 1 + y, 2 + x, 1 + y);
					set_kletka("null", x + 2, y + 1);
				}
			}
			if (AD31K == true)
			{
				AD31KI = AD10K;
				if (AD31KI == true);
				else {
					//copy_temp(546, 1 + x, 0 + y);
					copy_kletka(1 + x, 0 + y, 3 + x, 1 + y);
					set_kletka("null", x + 3, y + 1);
				}
			}
			if (AD02K == true)
			{
				AD02KI = AD23K;
				if (AD20KI == true);
				else {
					//copy_temp(546, 2 + x, 3 + y);
					copy_kletka(2 + x, 3 + y, 0 + x, 2 + y);
					set_kletka("null", x, y + 2);
				}
			}
			if (AD12K == true)
			{
				AD12KI = AD22K;
				if (AD12KI == true);
				else {
					//copy_temp(546, 2 + x, 2 + y);
					copy_kletka(2 + x, 2 + y, 1 + x, 2 + y);
					set_kletka("null", x + 1, y + 2);
				}
			}
			if (AD22K == true)
			{
				AD22KI = AD21K;
				if (AD22KI == true);
				else {
					//copy_temp(546, 2 + x, 1 + y);
					copy_kletka(2 + x, 1 + y, 2 + x, 2 + y);
					set_kletka("null", x + 2, y + 2);
				}
			}
			if (AD32K == true)
			{
				AD32KI = AD20K;
				if (AD32KI == true);
				else {
					//copy_temp(546, 2 + x, 0 + y);
					copy_kletka(2 + x, 0 + y, 3 + x, 2 + y);
					set_kletka("null", x + 3, y + 2);
				}
			}
			if ((AD03K == true))
			{
				AD03KI = AD33K;
				if (AD03KI == true);
				else {
					//copy_temp(546, 3 + x, 3 + y);
					copy_kletka(3 + x, 3 + y, 0 + x, 3 + y);
					set_kletka("null", x, y + 3);
				}
			}
			if ((AD13K == true))
			{
				AD13KI = AD32K;
				if (AD13KI == true);
				else {
					//copy_temp(546, 3 + x, 2 + y);
					copy_kletka(3 + x, 2 + y, 1 + x, 3 + y);
					set_kletka("null", x + 1, y + 3);
				}
			}
			if ((AD23K == true))
			{
				AD23KI = AD31K;
				if (AD23KI == true);
				else {
					//copy_temp(546, 3 + x, 1 + y);
					copy_kletka(3 + x, 1 + y, 2 + x, 3 + y);
					set_kletka("null", x + 2, y + 3);
				}
			}
			if ((AD33K == true))
			{
				AD33KI = AD30K;
				if (AD33KI == true);
				else {
					//copy_temp(546, 3 + x, 0 + y);
					copy_kletka(3 + x, 0 + y, 3 + x, 3 + y);
					set_kletka("null", x + 3, y + 3);
				}
			}
			if ((AD00KI == true))
			{
				//copy_temp(546, 0 + x, 3 + y);
				copy_kletka(0 + x, 3 + y, 0 + x, 0 + y);
				set_kletka("null", x, y);
			}
			if (AD10KI == true)
			{
				//copy_temp(546, 0 + x, 2 + y);
				copy_kletka(0 + x, 2 + y, 1 + x, 0 + y);
				set_kletka("null", 1 + x, y);
			}
			if (AD20KI == true)
			{
				//copy_temp(546, 0 + x, 1 + y);
				copy_kletka(0 + x, 1 + y, 2 + x, 0 + y);
				set_kletka("null", x + 2, y);
			}
			if ((AD30KI == true))
			{
				//copy_temp(546, 0 + x, 0 + y);
				copy_kletka(0 + x, 0 + y, 3 + x, 0 + y);
				set_kletka("null", x + 3, y);
			}
			if (AD01KI == true)
			{
				//copy_temp(546, 1 + x, 3 + y);
				copy_kletka(1 + x, 3 + y, 0 + x, 1 + y);
				set_kletka("null", x, y + 1);
			}
			if (AD11KI == true)
			{
				//copy_temp(546, 1 + x, 2 + y);
				copy_kletka(1 + x, 2 + y, 1 + x, 1 + y);
				set_kletka("null", x + 1, y + 1);
			}
			if (AD21KI == true)
			{
				//copy_temp(546, 1 + x, 1 + y);
				copy_kletka(1 + x, 1 + y, 2 + x, 1 + y);
				set_kletka("null", x + 2, y + 1);
			}
			if (AD31KI == true)
			{
				//copy_temp(546, 1 + x, 0 + y);
				copy_kletka(1 + x, 0 + y, 3 + x, 1 + y);
				set_kletka("null", x + 3, y + 1);
			}
			if (AD02KI == true)
			{
				//copy_temp(546, 2 + x, 3 + y);
				copy_kletka(2 + x, 3 + y, 0 + x, 2 + y);
				set_kletka("null", x, y + 2);
			}
			if (AD12KI == true)
			{
				//copy_temp(546, 2 + x, 2 + y);
				copy_kletka(2 + x, 2 + y, 1 + x, 2 + y);
				set_kletka("null", x + 1, y + 2);
			}
			if (AD22KI == true)
			{
				//copy_temp(546, 2 + x, 1 + y);
				copy_kletka(2 + x, 1 + y, 2 + x, 2 + y);
				set_kletka("null", x + 2, y + 2);
			}
			if (AD32KI == true)
			{
				//copy_temp(546, 2 + x, 0 + y);
				copy_kletka(2 + x, 0 + y, 3 + x, 2 + y);
				set_kletka("null", x + 3, y + 2);
			}
			if ((AD03KI == true))
			{
				//copy_temp(546, 3 + x, 3 + y);
				copy_kletka(3 + x, 3 + y, 0 + x, 3 + y);
				set_kletka("null", x, y + 3);
			}
			if ((AD13KI == true))
			{
				//copy_temp(546, 3 + x, 2 + y);
				copy_kletka(3 + x, 2 + y, 1 + x, 3 + y);
				set_kletka("null", x + 1, y + 3);
			}
			if ((AD23KI == true))
			{
				//copy_temp(546, 3 + x, 1 + y);
				copy_kletka(3 + x, 1 + y, 2 + x, 3 + y);
				set_kletka("null", x + 2, y + 3);
			}
			if ((AD33KI == true))
			{
				//copy_temp(546, 3 + x, 0 + y);
				copy_kletka(3 + x, 0 + y, 3 + x, 3 + y);
				set_kletka("null", x + 3, y + 3);
			}
			for (int xx = 0; xx < 14; xx++)
			{
				for (int yy = 0; yy < 20; yy++)
				{
					if (get_kletka(20, xx, yy) == 1) set_active(20, xx, yy, 0);
					else;
				}
			}
			set_active(20, 0 + x, 0 + y, 1);
		}
		int test33 = 22;
	}
	else;
}

bool pole::check_alerm_left(int x)
{
	int y;
	for (y = 19; y > -1; y--)
	{
		if (((get_active(x, y) == 2) & (get_active(x + 1, y) == 1)) || ((x == 4) & ((get_active(x, y) == 1)&(get_kletka(1,x,y)==0)))||((x==4)&(get_active(x, y) == 1)))
			return false;
	}
	return true;
}

bool pole::check_alerm_right(int x)
{
	int y;
	for (y = 19; y > -1; y--)
	{
		if (((get_active(x, y) == 2) & (get_active(x - 1, y) == 1)) || ((x == 13) & (get_active(x, y) == 1)))
			return false;
	}
	return true;
}

int pole::get_navigator_x()
{
	int x;
	int y;
	for (x = 0; x < 14; x++)
	{
		for (y = 0; y < 20; y++)
		{
			if (get_kletka(20, x, y) == true) 
				return x;
		}
	}
}

int pole::get_navigator_y()
{
	int x;
	int y;
	for (x = 0; x < 14; x++)
	{
		for (y = 0; y < 20; y++)
		{
			if (get_kletka(20, x, y) == true) return y;
		}
	}
}

int pole::get_rez(int x, int y)
{
	return get_kletka(100, x, y);
}

bool pole::status_active()
{
	if (status_pov == true)
	{
		status_pov = false;
		return false;
	}
	else 
	{
		status_pov = true;
		return true;
	}
}

void pole::relife()
{
	int x;
	int y;
	for (x = 0; x < 14; x++)
	{
		for (y = 0; y < 20; y++)
		{
			if ((get_active(x, y) != 0) & (get_kletka(1, x, y) == 0))
			{
				set_active(1, x, y, 0);
				set_active(1888, x, y, 0);
			}
			else;
		}
	}
}

bool pole::score_app()
{
	int x;
	int y;
	bool test;
	bool test1;
	for (y = 19; y >-1; y--)
	{
		test = false;
		test1 = true;
		for (x = 4; x < 14; x++)
		{
			if ((get_active(x, y) == 2)&(test1==true))
			{
				test = true;
			}
			else
			{
				test1 = false;
			}
		}
		if ((test == true)&(test1==true))
			return true;
		else;
	}
	return false;
}

int pole::line_remove()
{
	int x;
	int y;
	bool test;
	bool test1;
	bool on=true;
	int scores = 0;
	while (on == true)
	{
		on = false;
		for (y = 19; y > -1; y--)
		{
			test = false;
			test1 = true;
			for (x = 4; x < 14; x++)
			{
				if ((get_active(x, y) == 2) & (test1 == true))
				{
					test = true;
				}
				else
				{
					test1 = false;
				}
			}
			if ((test == true) & (test1 == true))
			{
				int xx;
				int yy;
				for (xx = 4; xx < 14; xx++)
				{
					set_kletka("null", xx, y);
				}
				scores = scores + 1;
				on = true;

				for (xx = 4; xx < 14; xx++)
				{
					for (yy = y - 1; yy > -1; yy--)
					{
						copy_kletka(xx, yy + 1, xx, yy);
						set_kletka("null", xx, yy);
					}
				}
				for (xx = 4; xx < 14; xx++)
				{
					set_kletka("null", xx, 0);
				}
			}
			else;
		}
		
	}
	for (x = 13; x > 0; x--)
	{
		for (y = 19; y > -1; y--)
		{
			if ((get_kletka(0, x, y) == 2) & (((get_kletka(0, x - 1, y) == 0) || (x == 4))) & ((get_kletka(0, x, y - 1) == 0) || (y == 0)) & ((get_kletka(0, x, y + 1) == 0) || (y == 19)) & (((get_kletka(0, x + 1, y) == 0) || (x == 13))))
			{
				while ((get_kletka(0, x, y + 1) == 0) & (y != 19))
				{
					//for (int yy = y; yy < 19; yy++)
					//{
						copy_kletka(x, y + 1, x, y);
						set_kletka("null", x, y);
						//if (y == 18) y = 20;
						//else;
					//}
				}
			}
		}
	}
	return scores;
	//return false;
}
