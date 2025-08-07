//day20-6
#include"Car.h"
#include<iostream>
using namespace std;
Car::Car(string model, int year) :model(model), year(year) {}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setYear(int year) {
	this->year = year;
}

void Car::displayInfo() {
	cout << "Model : " << model << endl << "Year : " << year << endl;
}