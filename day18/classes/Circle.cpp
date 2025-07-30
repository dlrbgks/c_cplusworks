//day18-6
#include"Circle.h"
#include<iostream>
using namespace std;
Circle::Circle(int x, int y, int radius) : center(x, y), radius(radius) {

}

void Circle::displayInfo() {
	cout << "Center of Circle : (" << center.getX() << ", " << center.getY() << ")" << ", Radius : " << radius << endl;
}