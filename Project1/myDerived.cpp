#include "myDerived.h"



myDerived::myDerived()
{
}


myDerived::~myDerived()
{
}

myDerived::myDerived(int aa, int bb, int cc, int xx, int yy, double zz, string str) : myBase(xx, yy, zz, str)
{
	a = aa;
	b = bb;
	c = cc;
}

int myDerived::getA()
{
	return a;
}

int myDerived::getB()
{
	return b;
}

int myDerived::getC()
{
	return c;
}