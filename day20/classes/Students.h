//day20-8
#ifndef STUDENTS_H
#define STUDENTS_H
#include<string>
using namespace std;

struct Student
{
	string name;
	int grade;
	string address;
};

void showInfo(Student& st);

#endif // !STUDENTS_H

