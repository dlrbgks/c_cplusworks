//day20-2
#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;

class Card {
private:
	static int serialNum;
	string name;
	int cardNumber;

public:
	Card();
	Card(string name);
	int getCardNumber();
	void printInfo();

};


#endif // !CARD_H

