//day20-5
#ifndef CAR_H
#define CAR_H
#include<string>
using namespace std;
class Car {
private:
	string model;
	int year;
public:
	Car(string model = "", int year = 0);
	void setModel(string model);
	void setYear(int year);
	void displayInfo();
};

#endif // !CAR_H
