//day21-7
#include"Person.h"
#include<iostream>
using namespace std;

Person::Person(string name) {
	this->name = name;
}

void Person::greet() {
	cout << "Name : " << name << "greeting." << endl;
	cout << "\'Hello!\'" << endl;
}

void Person::displayInfo() {
	cout << "Name : " << name << endl;
}