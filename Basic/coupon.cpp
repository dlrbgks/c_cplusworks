//day15-4
#include<iostream>
using namespace std;

int main() {
	cout << "출생연도 입력 : ";
	int year;
	cin >> year;
	string date;
	if (year % 1000 == year) {
		cout << "출생연도는 네자리수여야 합니다" << endl;
		return 0;
	}

	switch (year % 10) {
	case 1: case 6:
		date = "월요일";
		break;
	case 2: case 7:
		date = "화요일";
		break;
	case 3: case 8:
		date = "수요일";
		break;
	case 4: case 9:
		date = "목요일";
		break;
	case 5: case 0:
		date = "금요일";
		break;
	default:
		cout << "뭘 입력한거니" << endl;
		return 0;
	}

	cout << "신청일은 " << date << "입니다." << endl;




	return 0;
}