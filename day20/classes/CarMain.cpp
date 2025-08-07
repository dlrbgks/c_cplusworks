//day20-7
#include"Car.h"
#include<iostream>
using namespace std;

int main() {
	Car* c1 = new Car("EV6", 2024);
	c1->displayInfo();
	delete c1;

	Car* c2 = new Car();
	c2->displayInfo();
	delete c2;





	return 0;
}