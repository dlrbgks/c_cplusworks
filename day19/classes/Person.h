//day19-1
#ifndef PERSON_H
#define PERSON_H
#include<string>
#include"Bus.h"
using namespace std;
class Person
{
public:
	Person(string name, int money);
	
	void takeBus(Bus& bus); // Bus&(참조자 사용)
	void displayInfo();

private:
	string name;
	int money;
};

#endif // !PERSON_H
