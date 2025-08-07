//day21-6
#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person {
protected:
	string name;
public:
	Person(string name);

	void greet();
	void displayInfo();

};

#endif // !PERSON_H
