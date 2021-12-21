#pragma once
#include <iostream>
#include <string>
using namespace std;

class klet
{
public:
	klet()
	{

	}
	int get(int option);
	void set(string temp);
	void set(int option,int init);
private:
	int color = 0;
	int active=0;
	bool navigator = false;
	int rez=4;
	bool povorot = true;
};

