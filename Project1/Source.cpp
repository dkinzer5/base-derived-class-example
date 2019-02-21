#include <iostream>
#include <cstdlib>
#include <string>
#include"myBase.h"
#include"myDerived.h"
using namespace std;

int main() {
	myBase Base1(2, 4, 6.5, "hello there world of mine!");
	myDerived Derived1(5, 6, 7, 1, 2, 3.5, "This is my derived class");

	cout << "the base class values are: " << endl;
	cout << "x: " << Base1.getX() << endl;
	cout << "y: " << Base1.getY() << endl;
	cout << "z: " << Base1.getZ() << endl;
	cout << "String: " << Base1.getString() << endl << endl;

	cout << "the derived class values are: " << endl;
	cout << "x: " << Derived1.getX() << endl;
	cout << "y: " << Derived1.getY() << endl;
	cout << "z: " << Derived1.getZ() << endl;
	cout << "String: " << Base1.getString() << endl;
	cout << "a: " << Derived1.getA() << endl;
	cout << "b: " << Derived1.getB() << endl;
	cout << "c: " << Derived1.getC() << endl;
	return 0;
}