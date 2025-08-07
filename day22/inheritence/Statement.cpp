//day22-5
#include"Drink.h"
#include"Alcohol.h"
#include<iostream>
using namespace std;

int main() {
	Drink coffee("커피", 2500, 4);
	Drink greenTea("녹차", 3000, 3);

	Alcohol soju("소주", 3500, 2, 14.3f);
	


	Drink::printTitle();
	coffee.printData();
	greenTea.printData();
	Alcohol::printTitle();
	soju.printData();

	int total = coffee.calcPrice() + greenTea.calcPrice() + soju.calcPrice();
	cout << "***** 합계 금액 : " << total << "원 *****" << endl;


	return 0;
}