#include "klet.h"

int klet::get(int option)
{
    if (option == 1)return color;
    else if (option == 20) return navigator;
    else if (option == 100) return rez;
    else if (option == 50) return povorot;
    else return active;
}

void klet::set(string temp)
{
    if (temp == "null") 
    {
        color = 0;
        active = false;
        navigator = false;
        rez = 0;
        povorot = false;
    }
}

void klet::set(int option, int init)
{
    if (option == 1) color = init;
    else if (option == 20) navigator = init;
    else if (option == 100) rez = init;
    else if (option == 50) povorot = init;
    else active = init;
}
