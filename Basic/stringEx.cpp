//day15-3
#include<iostream>
#include<string>
using namespace std;
int main() {

	string str = "Hello World";
	cout << str << endl;
	cout << str.length() << endl;
	//���ڿ� �ε��� - ���ڷ� ��ȯ
	cout << str.at(0) << endl;
	cout << str[6] << endl;

	//�ֹε�Ϲ�ȣ ���� ����
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
		cout << "�������� �ʴ� ����Դϴ�" << endl;
	}




	return 0;
}