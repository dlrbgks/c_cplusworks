#ifndef CAR_H
#define CAR_H
#include<string>
using namespace std;

class Car {
public:
	Car(string model, int year);

	void CarInfo();
	void drive();

private:
	int year;
	string model;
};

#endif // !Car_H

