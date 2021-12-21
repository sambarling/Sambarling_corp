#pragma once
#include "figure.h"
class pole :public klet,public figure
{
public:
	pole()
	{

	}
	int gety(int xy,int yx);
	int get_active(int xy, int yx);
	void set_active(int option,int xy, int yx, int num);
	bool down_figure();
	void close_figure();
	bool check_alerm(int x);
	void new_pole();
	void key_left();
	void key_right();
	void key_up(bool rez);
	bool check_alerm_left(int x);
	bool check_alerm_right(int x);
	int get_navigator_x();
	int get_navigator_y();
	int get_rez(int x, int y);
	bool status_active();
	void relife();
	bool score_app();
	int line_remove();
private:
	bool status_pov = false;
};