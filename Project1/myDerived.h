#pragma once
#include "myBase.h"
class myDerived :
	public myBase
{
public:
	myDerived();
	~myDerived();
	myDerived(int, int, int, int, int, double, string);
	int getA();
	int getB();
	int getC();



private:
	int a; 
	int b; 
	int c;
};

