//day18-10
#include"Student.h"
#include<iostream>
using namespace std;
Student::Student(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

void Student::setKoreanSubject(string name, int score) {
	this->korean.setSubjectName(name);
	this->korean.setScorePoint(score);
}

void Student::setMathSubject(string name, int score) {
	this->math.setScorePoint(score);
	this->math.setSubjectName(name);
}

void Student::showInfo() {
	cout << "Student ID : " << studentId << endl;
	cout << "Name : " << studentName << endl;
	cout << "Korean score : " << korean.getScorePoint() << endl;
	cout << "Math score : " << math.getScorePoint() << endl;
}