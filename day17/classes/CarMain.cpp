//day17-8
#include<iostream>
#include"Car.h"
using namespace std;
int main() {
	Car car("Ionic6", 2024);
	car.CarInfo();
	car.drive();

	// ��ü �迭

	const int size = 3;

	Car carList[size] = {
		Car("�ҳ�Ÿ", 2020),
		Car("����Ƽ��", 2022),
		Car("EV6", 2025)
	};

	for (int i = 0; i < size; i++) {
		carList[i].CarInfo();1
	}

}