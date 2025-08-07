#include"Cat.h"
#include<iostream>
using namespace std;

void Cat::cry() {
	cout << "具克" << endl;
}

Cat::~Cat() {
	cout << "Cat 按眉 家戈" << endl;
}