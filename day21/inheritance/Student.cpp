//day21-9
//day21-9
#include"Student.h"
#include<iostream>
using namespace std;

//�θ� Ŭ���� ������ ��ӹޱ�
Student::Student(string name, int studentId):
	Person(name), studentId(studentId) {}

void Student::greet() {
	cout << "Name : " << name << "greeting." << endl;
	cout << "\'Hello!\'" << endl;
}

void Student::displayInfo() {
	cout << "Student Name : " << name << endl;
	cout << "StudentID : " << studentId;
}