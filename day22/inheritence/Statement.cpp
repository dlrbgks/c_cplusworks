//day22-5
#include"Drink.h"
#include"Alcohol.h"
#include<iostream>
using namespace std;

int main() {
	Drink coffee("Ŀ��", 2500, 4);
	Drink greenTea("����", 3000, 3);

	Alcohol soju("����", 3500, 2, 14.3f);
	


	Drink::printTitle();
	coffee.printData();
	greenTea.printData();
	Alcohol::printTitle();
	soju.printData();

	int total = coffee.calcPrice() + greenTea.calcPrice() + soju.calcPrice();
	cout << "***** �հ� �ݾ� : " << total << "�� *****" << endl;


	return 0;
}