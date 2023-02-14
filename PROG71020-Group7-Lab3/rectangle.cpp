// PROG71020 - Lab 3
// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward
// 2023-02-08

// rectangle member functions implementation

#include "rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(int length, int width) {
	this->length = length;
    this->width = width;
}

int Rectangle::area() {
	return length * width;
}

Rectangle& Rectangle::setSides(int length, int width) {
	this->length = length;
	this->width = width;

    return *this;
}

int Rectangle::getLength() {
	return length;
}

int Rectangle::getWidth() {
	return width;
}

std::ostream& operator << (std::ostream& cout, Rectangle& r) {
    cout << "Rectangle: The length = " << r.length << ", the width = " << r.width << " and the area = " << r.area() << std::endl;
	return cout;
}

Rectangle operator +(Rectangle r1, Rectangle r2) {
	Rectangle r;
	r.length = r1.length + r2.length;
	r.width = r1.width + r2.width;
	return r;
}

Rectangle operator *(Rectangle r1, int num) {
	Rectangle r;
	r.length = r1.length * num;
	r.width = r1.width * num;
	return r;
}
