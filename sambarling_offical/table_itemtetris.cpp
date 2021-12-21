#include "table_itemtetris.h"

int table_itemtetris::get_rez()
{
    return rez;
}

QString table_itemtetris::get_name()
{
    return name;
}

void table_itemtetris::set_rez(int item)
{
    rez = item;
}

void table_itemtetris::set_name(QString item)
{
    name = item;
}
