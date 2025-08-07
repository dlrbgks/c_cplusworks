//day20-4
#include<iostream>
#include"Card.h"
using namespace std;

int main() {
	
	Card c1("임시연");
	Card c2("우상영");
	Card c3("박상회");
	c1.printInfo();
	c2.printInfo();
	c3.printInfo();
	
	/*
	const int SIZE = 3;
	Card cardList[SIZE] = {
		Card("임시연"),
		Card("우상영"),
		Card("박상회")
	};
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}
	*/
	const int SIZE = 3;
	Card cardList[SIZE];
	for (int i = 0; i < SIZE; i++) {
		string name;
		cout << "Enter name " << i + 1 << " : ";
		getline(cin, name);
		cardList[i] = Card(name);
	}
	for (int i = 0; i < SIZE; i++) {
		cardList[i].printInfo();
	}






	return 0;
}