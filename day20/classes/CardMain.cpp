//day20-4
#include<iostream>
#include"Card.h"
using namespace std;

int main() {
	
	Card c1("�ӽÿ�");
	Card c2("���");
	Card c3("�ڻ�ȸ");
	c1.printInfo();
	c2.printInfo();
	c3.printInfo();
	
	/*
	const int SIZE = 3;
	Card cardList[SIZE] = {
		Card("�ӽÿ�"),
		Card("���"),
		Card("�ڻ�ȸ")
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