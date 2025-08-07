//day20-10
#include"Students.h"
#include<iostream>
using namespace std;
int main() {
	/*
	Student st1;
	st1.name = "한강";
	st1.grade = 2;
	st1.address = "서울";
	showInfo(st1);
	*/
	const int SIZE = 3;
	Student students[SIZE] = {
		{"김지구", 1, "서울시 노원구"},
		{"박화성", 3, "서울시 종로구"},
		{"최목성", 2, "경기도 의정부시"}
	};
	for (int i = 0; i < SIZE; i++) {
		showInfo(students[i]);
	}





	return 0;
}