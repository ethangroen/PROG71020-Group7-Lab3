// PROG71020 - Lab 3
// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward
// 2023-02-08

// square member functions implementation

#include "square.h"

Square::Square(int length /* = 0 */) {
	this->length = length;
    width = length;
}

Square& Square::setSides(int length) {
	this->length = length;
    width = length;

    return *this;
}

std::ostream& operator << (std::ostream& cout, Square& s) {
	cout << "Square: The side = " << s.length << " and the area = " << s.area() << std::endl;
	return cout;
}

Square operator +(Square s1, Square s2) {
	Square s;
	s.length = s1.length + s2.length;
    s.width = s1.width + s2.width;
	return s;
}

Square operator *(Square s1, int num) {
	Square s;
	s.length = s1.length * num;
    s.width = s1.width * num;
	return s;
}
