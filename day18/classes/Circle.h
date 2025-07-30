//day18-5
#ifndef CIRCLE_H
#define CIRCLE_H
#include"Point.h"
class Circle {
private:
	Point center;
	int radius;

public:
	Circle(int x, int y, int radius);
	void displayInfo();
};

#endif // !CIRCLE_H