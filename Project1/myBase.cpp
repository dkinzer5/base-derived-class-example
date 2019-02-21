#include "myBase.h"



myBase::myBase()
{
}

myBase::~myBase()
{
}


myBase::myBase(int xx, int yy, double zz, string stringStr)
{
	x = xx;
	y = yy;
	z = zz;
	myString = stringStr;
}

int myBase::getX()
{
	return x;
}

int myBase::getY()
{
	return y;
}

double myBase::getZ()
{
	return z;
}

string myBase::getString()
{
	return myString;
}