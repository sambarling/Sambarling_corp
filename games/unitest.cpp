#include "unitest.h"

double unitest::test_dpi(double dpi_original, double dpi_user)
{
	if (dpi_original == dpi_user)
	{
		return dpi_original;
	}
	else
	{
		double test = 100;
		return test;
	};
}

bool unitest::test_AOE(int cx, int cy, int del, int hir,int tna_cx,int tna_cy)
{
	 int test1 = tna_cx + del;
        int test2 = tna_cy + hir;
        bool test3 = true;
        if (test1 > cx)
        {
            test3 = false;
        }
        else if (test2 > cy)
        {
            test3 = false;
        }
        else;
        return test3;
}
