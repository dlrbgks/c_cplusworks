//day19-2
#include"Person.h"
#include<iostream>
using namespace std;
Person::Person(string name, int money) : name(name), money(money) {

}

void Person::takeBus(Bus& bus) {
	if (money < bus.getFEE()) {
		cout << "Not enough money." << endl;
	}
	else {
		bus.take();
		money -= bus.getFEE();
	}
}

void Person::displayInfo() {
	cout << name << " : left " << money << " won" << endl;
}