#include "square.h"

Square::Square() {
	side = 0;
}

Square::Square(int s) {
	side = s;
}

int Square::Area() {
	int area = (int)pow(this->side, 2);
	return area;
}

Square& Square::setSide(int s) {
	this->side = s;
	return *this;
}

int Square::getSide() {
	return this->side;
}

std::ostream& operator << (std::ostream& cout, Square& s) {
	cout << "Square: The side = " << s.side << " and the area = " << s.Area() << std::endl;
	return cout;
}

Square operator +(Square s1, Square s2) {
	Square s;
	s.side = s1.side + s2.side;
	return s;
}

Square operator *(Square s1, int num) {
	Square s;
	s.side = s1.side * num;
	return s;
}