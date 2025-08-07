//day19-6
#include<iostream>
#include"Students.h"
using namespace std;
Students::Students(int studentId, string studentName) : studentId(studentId), studentName(studentName){}

void Students::addSubject(string name, int score) {
	if (subjectCount < 10) {
		subjects[subjectCount].setSubjectName(name);
		subjects[subjectCount].setScorePoint(score);
		subjectCount++;
	}
}

void Students::showInfo() {
	cout << "Student ID : " << studentId << endl
		<< "Name : " << studentName << endl;
	int sum = 0;
	for (int i = 0; i < subjectCount; i++) {
		cout << subjects[i].getSubjectName() << endl << "Score : " << subjects[i].getScorePoint() << endl;
		sum += subjects[i].getScorePoint();
	}
	cout << fixed;
	cout.precision(1);
	cout << "Average : " << (float)sum / subjectCount << endl;
	cout << "---------------------------\n";
}