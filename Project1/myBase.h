#pragma once
#include<string>

using namespace std;

class myBase
{
public:
	myBase();
	~myBase();
	myBase(int, int, double, string);
	int getY();
	int getX();
	double getZ();
	string getString();

private:
	int x;
	int y;
	double z;
	string myString;
};

