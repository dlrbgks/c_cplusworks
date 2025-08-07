//day21-10
#include<iostream>
using namespace std;
#include"Student.h"

int main() {
	Person p1("이종범");
	p1.greet();
	p1.displayInfo();

	Student s1("이정후", 51);
	s1.greet();
	s1.displayInfo();



	return 0;
}