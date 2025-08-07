//day22-1
#ifndef DRINK_H
#define DRINK_H

#include<string>
using namespace std;

class Drink
{
public:
	Drink(string name, int price, int quantity);

	int calcPrice();
	static void printTitle();
	void printData();

protected:
	string name;
	int price;
	int quantity;
	

};


#endif // !DRINK_H
