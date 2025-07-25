//day15-3
#include<iostream>
#include<string>
using namespace std;
int main() {

	string str = "Hello World";
	cout << str << endl;
	cout << str.length() << endl;
	//문자열 인덱싱 - 문자로 반환
	cout << str.at(0) << endl;
	cout << str[6] << endl;

	//주민등록번호 성별 구분
	string jumin = "030825-4567890";
	char genderDigit = jumin.at(7);
	cout << genderDigit << endl;
	switch (genderDigit) {
	case '1': case '3':
		cout << "Man" << endl;
		break;
	case '2': case '4':
		cout << "Woman" << endl;
	default:
		cout << "지원되지 않는 기능입니다" << endl;
	}




	return 0;
}