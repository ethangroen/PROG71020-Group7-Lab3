// PROG71020 - Lab 3
// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward
// 2023-02-08

// square class declaration

#pragma once
#include "rectangle.h"

class Square:public Rectangle
{
public:
	Square(int s = 0);

	Square& setSides(int length);

	friend Square operator +(Square s1, Square s2);
	friend Square operator *(Square s1, int num);
	friend std::ostream& operator << (std::ostream& cout, Square& s);
};
