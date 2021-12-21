#include "figure.h"

int figure::get_figure(int option)
{
    if (option == 3)return x;
    else if (option == 4)return y;
    else if (option == 5)return status_active_zone;
    else if (option == 6)return pozitiv;
    else if (option == 7)return up;
    else if (option == 8)return down;
    else if (option == 9)return left;
    else return right;
}



void figure::set_figure(int option, int init)
{
   
    if (option == 3) x=init;
    else if (option == 4) y=init;
    else if (option == 5) status_active_zone=init;
    else if (option == 6) pozitiv=init;
    else if (option == 7) up=init;
    else if (option == 8) down=init;
    else if (option == 9) left=init;
    else right=init;
}

void figure::set_active_zone(int xy, int yx, bool init, int inits)
{
	if (init == true)
	{
		poles[xy + 7][yx].set(0, init);
		poles[xy + 7][yx].set(1, inits);
	}
	else;
}

int figure::get_kletka(int option, int x, int y)
{
    return poles[x][y].get(option);
}

void figure::set_kletka(int option, int x, int y, int init)
{
    poles[x][y].set(option, init);
}

void figure::set_kletka(string option, int x, int y)
{
    poles[x][y].set(option);
}

void figure::copy_kletka(int x, int y, int xx, int yy)
{
    poles[x][y] = poles[xx][yy];
}

void figure::copy_temp(int option, int x, int y)
{
	temp = poles[x][y];
}

void figure::copy_temp(string option, int x, int y)
{
	poles[x][y] = temp;
}

bool figure::new_figure(int figures)
{
	bool status_figure = false;
	if (figures == 1)
	{
		int x=7;
		int y=0;
		int temp=0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1+y) == 0);
		else;
		if (get_kletka(0, x, 2+y) == 0);
		else;
		if (get_kletka(0, x, 3+y) == 0);
		else;
		if (get_kletka(0, 1+x, y) == 0);
		else;
		if (get_kletka(0, 1+x, 1+y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1+x, 2+y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1+x, 3+y) == 0);
		else;
		if (get_kletka(0, 2+x, y) == 0);
		else;
		if (get_kletka(0, 2+x, 1+y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2+x, 2+y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2+x, 3+y) == 0);
		else;
		if (get_kletka(0, 3+x, y) == 0);
		else;
		if (get_kletka(0, 3+x, 1+y) == 0);
		else;
		if (get_kletka(0, 3+x, 2+y) == 0);
		else;
		if (get_kletka(0, 3+x, 3+y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (figures == 2)
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, y) == 0);
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (figures == 3)
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, y) == 0);
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (figures == 4)
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, y) == 0);
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (figures == 5)
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0);
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (figures == 6)
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, y) == 0);
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	else
	{
		int x = 7;
		int y = 0;
		int temp = 0;
		// temp=temp+1;
		if (get_kletka(0, x, y) == 0);
		else;
		if (get_kletka(0, x, 1 + y) == 0);
		else;
		if (get_kletka(0, x, 2 + y) == 0);
		else;
		if (get_kletka(0, x, 3 + y) == 0);
		else;
		if (get_kletka(0, 1 + x, y) == 0);
		else;
		if (get_kletka(0, 1 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 2 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 1 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 1 + y) == 0)temp = temp + 1;
		else;
		if (get_kletka(0, 2 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 2 + x, 3 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, y) == 0);
		else;
		if (get_kletka(0, 3 + x, 1 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 2 + y) == 0);
		else;
		if (get_kletka(0, 3 + x, 3 + y) == 0);
		else;
		if (temp == 4)
			status_figure = true;
		else;
	}
	if (status_figure == true)
	{
		if (figures == 1)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, false, 0);
			set_active_zone(1, 1, true, 1);
			set_active_zone(1, 2, true, 1);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, false, 0);
			set_active_zone(2, 1, true, 1);
			set_active_zone(2, 2, true, 1);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
		else if (figures == 2)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, true, 2);
			set_active_zone(1, 1, true, 2);
			set_active_zone(1, 2, true, 2);
			set_active_zone(1, 3, true, 2);
			set_active_zone(2, 0, false, 0);
			set_active_zone(2, 1, false, 0);
			set_active_zone(2, 2, false, 0);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
		else if (figures == 3)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, true, 3);
			set_active_zone(1, 1, true, 3);
			set_active_zone(1, 2, true, 3);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, false, 0);
			set_active_zone(2, 1, true, 3);
			set_active_zone(2, 2, false, 0);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
		else if (figures == 4)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, true, 4);
			set_active_zone(1, 1, true, 4);
			set_active_zone(1, 2, true, 4);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, false, 0);
			set_active_zone(2, 1, false, 0);
			set_active_zone(2, 2, true, 4);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
		else if (figures == 5)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, false, 0);
			set_active_zone(1, 1, false, 0);
			set_active_zone(1, 2, true, 5);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, true, 5);
			set_active_zone(2, 1, true, 5);
			set_active_zone(2, 2, true, 5);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
		else if (figures == 6)
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, true, 6);
			set_active_zone(1, 1, true, 6);
			set_active_zone(1, 2, false, 0);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, false, 0);
			set_active_zone(2, 1, true, 6);
			set_active_zone(2, 2, true, 6);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);

		}
		else
		{
			poles[7][0].set(20, 1);
			poles[7][0].set(100, 4);
			set_active_zone(0, 0, false, 0);
			set_active_zone(0, 1, false, 0);
			set_active_zone(0, 2, false, 0);
			set_active_zone(0, 3, false, 0);
			set_active_zone(1, 0, false, 0);
			set_active_zone(1, 1, true, 7);
			set_active_zone(1, 2, true, 7);
			set_active_zone(1, 3, false, 0);
			set_active_zone(2, 0, true, 7);
			set_active_zone(2, 1, true, 7);
			set_active_zone(2, 2, false, 0);
			set_active_zone(2, 3, false, 0);
			set_active_zone(3, 0, false, 0);
			set_active_zone(3, 1, false, 0);
			set_active_zone(3, 2, false, 0);
			set_active_zone(3, 3, false, 0);
		}
	}
	else;
	if (status_figure == true)
		return true;
	else
		return false;
}