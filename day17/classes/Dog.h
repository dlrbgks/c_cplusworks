#ifndef DOG_H
#define DOG_H
#include<string>
using namespace std;

class Dog {
private:
	string type;
	int age;
public:
	Dog(string type, int age);

	string getType();
	int getAge();
	void bark();

};
#endif