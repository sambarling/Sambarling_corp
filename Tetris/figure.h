#pragma once
#include"klet.h"
class figure
{
public:
	figure()
	{

	}
	figure(int xs,int xy,int pozitive)
	{
		x = xs;
		y = xy;
		pozitiv = pozitive;
	}
	bool new_figure(int figures);
	int get_figure(int option);
	void set_figure(int option, int init);
	void set_active_zone(int xy, int yx, bool init, int inits);
	int get_kletka(int option,int x,int y);
	void set_kletka(int option, int x, int y,int init);
	void set_kletka(string option, int x, int y);
	void copy_kletka(int x, int y, int xx, int yy);
	void copy_temp(int option,int x, int y);
	void copy_temp(string option, int x, int y);
private:
	int x=5;
	int y=1;
	bool active_zone[4][4];
	bool status_active_zone=0;
	int pozitiv = 1;
	bool up=0;
	bool down=0;
	bool left=0;
	bool right=0;
	klet poles[14][20];
	klet temp;
};

