//day17-7
#include<iostream>
#include"Car.h"
using namespace std;

Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

void Car::CarInfo() {
	cout << "Model : " << model << ", Year : " << year << endl;
}

void Car::drive() {
	cout << "Engine turn on" << endl;
}