//day19-3
#include"Person.h"
#include<iostream>
using namespace std;

int main() {
	Person woo("우영우", 10000);
	Bus bus600(600, 1500);

	Person han("한강", 2000);


	woo.takeBus(bus600);
	han.takeBus(bus600);
	han.takeBus(bus600);

	woo.displayInfo();
	han.displayInfo();
	bus600.displayInfo();








	return 0;
}