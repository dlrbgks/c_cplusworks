//day20-3
#include"Card.h"
#include<iostream>
using namespace std;

int Card::serialNum = 1000;

Card::Card() {}

Card::Card(string name) {
	this->name = name;
	cardNumber = serialNum;
	serialNum++;
}

int Card::getCardNumber() {
	return cardNumber;
}

void Card::printInfo() {
	cout << "Name : " << name << endl << "Card Number : " << cardNumber << endl;
}