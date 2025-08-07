//day22-2
#include"Drink.h"
#include<iostream>
using namespace std;

Drink::Drink(string name, int price, int quantity):
	name(name), price(price), quantity(quantity){ }

int Drink::calcPrice() {
	return price * quantity;
}

void Drink::printTitle() {
	cout << "��ǰ��\t����\t����\t�ݾ�\n";
}

void Drink::printData() {
	cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl;
}