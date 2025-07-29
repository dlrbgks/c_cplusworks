//day17-5
#include<iostream>
using namespace std;

class BirthDay
{
public:
	BirthDay();
	~BirthDay();
	void setYear(int year) {
		this->year = year;
	}
	void setMonth(int month) {
		this->month = month;
	}
	void setDay(int day) {
		this->day = day;
	}
	void printThis() {
		cout << this << endl;
	}

private:
	int year;
	int month;
	int day;
};

BirthDay::BirthDay()
{
}

BirthDay::~BirthDay()
{
}


int main() {
	BirthDay bDay;
	bDay.setYear(2025);
	cout << &bDay << endl;
	bDay.printThis();






	return 0;
}