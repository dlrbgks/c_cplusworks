//day20-10
#include"Students.h"
#include<iostream>
using namespace std;
int main() {
	/*
	Student st1;
	st1.name = "�Ѱ�";
	st1.grade = 2;
	st1.address = "����";
	showInfo(st1);
	*/
	const int SIZE = 3;
	Student students[SIZE] = {
		{"������", 1, "����� �����"},
		{"��ȭ��", 3, "����� ���α�"},
		{"�ָ�", 2, "��⵵ �����ν�"}
	};
	for (int i = 0; i < SIZE; i++) {
		showInfo(students[i]);
	}





	return 0;
}