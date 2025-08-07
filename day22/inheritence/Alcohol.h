//day22-3
#ifndef ALCOHOL_H
#define ALCOHOL_H

#include"Drink.h"

class Alcohol : public Drink {
private:
	float alcper;

public:
	Alcohol(string name, int price, int quantity, float alcper);

	static void printTitle();
	void printData();

};

#endif // !ALCOHOL_H

