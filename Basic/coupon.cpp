//day15-4
#include<iostream>
using namespace std;

int main() {
	cout << "������� �Է� : ";
	int year;
	cin >> year;
	string date;
	if (year % 1000 == year) {
		cout << "��������� ���ڸ������� �մϴ�" << endl;
		return 0;
	}

	switch (year % 10) {
	case 1: case 6:
		date = "������";
		break;
	case 2: case 7:
		date = "ȭ����";
		break;
	case 3: case 8:
		date = "������";
		break;
	case 4: case 9:
		date = "�����";
		break;
	case 5: case 0:
		date = "�ݿ���";
		break;
	default:
		cout << "�� �Է��ѰŴ�" << endl;
		return 0;
	}

	cout << "��û���� " << date << "�Դϴ�." << endl;




	return 0;
}