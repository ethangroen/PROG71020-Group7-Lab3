// PROG71020 - Lab 3
// 2023-02-08

// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward

// Rectangle header file

#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Rectangle
{
private:
	int length;
	int width;
public:
	Rectangle();
	Rectangle(int l, int w);

	int getLength();
	int getWidth();
	Rectangle& setSides(int l, int w);

	int Area();

	friend Rectangle operator +(Rectangle r1, Rectangle r2);

	friend Rectangle operator *(Rectangle r1, int num);

	friend std::ostream& operator << (std::ostream& cout, Rectangle& r);
};
