//day21-8
#ifndef STUDENT_H
#define STUDENT_H

#include"Person.h"
#include<string>
using namespace std;

class Student : public Person{
private:
	int studentId;

public:
	Student(string name, int studentId);

	void greet();
	void displayInfo();

};

#endif // !STUDENT_H

