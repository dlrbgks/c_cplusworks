//day17-3
#include"Dog.h"
#include<iostream>
using namespace std;
Dog::Dog(string type, int age) {
	this->type = type;
	this->age = age;
}

int Dog::getAge() {
	return age;
}

string Dog::getType() {
	return type;
}

void Dog::bark() {
	cout << "Па Па" << endl;
}