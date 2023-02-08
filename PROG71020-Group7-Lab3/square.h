#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Square
{
private:
	int side;
public:
	Square();
	Square(int s);

	int getSide();
	Square &setSide(int s);

	int Area();

	friend Square operator +(Square s1, Square s2);

	friend Square operator *(Square s1, int num);

	friend std::ostream& operator << (std::ostream& cout, Square& s);
};

	