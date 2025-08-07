//day19-7
#include"Students.h"
#include<iostream>
using namespace std;
int main() {
	Students park(1001, "박상회");

	park.addSubject("국어", 85);
	park.addSubject("미술", 92);
	park.addSubject("음악", 92);

	park.showInfo();






	return 0;
}