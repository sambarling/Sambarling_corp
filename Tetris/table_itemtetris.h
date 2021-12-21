#pragma once
#include <QString>
class table_itemtetris
{
public:
	table_itemtetris()
	{

	}
	int get_rez();
	QString get_name();
	void set_rez(int item);
	void set_name(QString item);
private:
	int rez;
	QString name;
};

