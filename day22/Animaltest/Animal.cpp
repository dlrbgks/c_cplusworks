#include"Animal.h"
#include<iostream>
using namespace std;

void Animal::breathe() {
	cout << "¼ûÀ» ½±´Ï´Ù.\n";
}

Animal::~Animal() {
	cout << "Animal °´Ã¼ ¼Ò¸ê\n";
}