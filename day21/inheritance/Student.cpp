//day21-9
//day21-9
#include"Student.h"
#include<iostream>
using namespace std;

//부모 클래스 생성자 상속받기
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