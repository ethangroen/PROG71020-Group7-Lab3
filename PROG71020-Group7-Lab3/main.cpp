// PROG71020 - Lab 3
// Group 7 - Ethan Groen, YoungSu Chae, Jonathan Ward
// 2023-02-08

// main file to test functionality of rectangle and square classes

#include <iostream>
#include "rectangle.h"
#include "square.h"

using namespace std;

int main(void) {
	Rectangle r0(2, 5);
	Square s0(7);

	cout << r0 << s0 << endl;

    Rectangle r1(4, 2);
    Rectangle r2(3, 5);
    cout << "Rectangle r1" << endl << r1;
    cout << "Rectangle r2" << endl << r2;
    cout << endl;

    Rectangle r3 = r1 * 2 + r2;
    cout << "Rectangle r3 = (Rectangle r1 * 2) + Rectangle r2" << endl << r3 << endl;

    Square s1(4);
    Square s2(5);
    cout << "Square s1" << endl << s1;
    cout << "Square s2" << endl << s2;
    cout << endl;

    Square s3 = s1 * 2 + s2;
    cout << "Square 3 = (Square 1 * 2) + Square 2" << endl << s3 << endl;

    return 0;
}
