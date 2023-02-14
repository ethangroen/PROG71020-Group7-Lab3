// PROG71020 - Lab 3
// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward
// 2023-02-08

// rectangle class declaration

#pragma once
#include <iostream>
#include <math.h>

class Rectangle
{
protected:
	int length;
	int width;

public:
    Rectangle();
	Rectangle(int length, int width);

	int getLength();
	int getWidth();
	
    // This must be virtual because the implementation is different for the 
    // derived Square class.  The implementation must differ because otherwise
    // the caller could make length different from width, which would not 
    // make sense for a square.  
    virtual Rectangle& setSides(int length, int width);

	int area();

	friend Rectangle operator +(Rectangle r1, Rectangle r2);
	friend Rectangle operator *(Rectangle r1, int num);
	friend std::ostream& operator << (std::ostream& cout, Rectangle& r);
};
