#include "rectangle.h"

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(int l, int w) {
	length = l;
	width = w;
}

int Rectangle::Area() {
	int area = this->length * this->width;
	return area;
}

Rectangle& Rectangle::setSides(int l, int w) {
	this->length = l;
	this->width = w;
	return *this;
}

int Rectangle::getLength() {
	return this->length;
}

int Rectangle::getWidth() {
	return this->width;
}

std::ostream& operator << (std::ostream& cout, Rectangle& r) {
	cout << "Rectangle: The length = " << r.length << ", the width = " << r.width << " and the area = " << r.Area() << std::endl;
	return cout;
}

Rectangle operator +(Rectangle r1, Rectangle r2) {
	Rectangle r;
	r.length = r1.length + r2.length;
	r.width = r1.length + r2.length;
	return r;
}

Rectangle operator *(Rectangle r1, int num) {
	Rectangle r;
	r.length = r1.length * num;
	r.width = r1.width * num;
	return r;
}