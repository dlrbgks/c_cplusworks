//day24-4
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> carts;
	carts.push_back("���");
	carts.push_back("����");
	carts.push_back("ȭ����");
	carts.push_back("���");

	cout << "*** carts ����Ʈ ��� ***" << endl;
	for (auto cart : carts) {
		cout << cart << " ";
	}
	cout << endl;
	cout << "========================" << endl;
	cout << "1. \'����\'�� \'��\'�� ����" << endl;
	carts.at(1) = "��";

	cout << "2. \'ȭ����\'�� ����" << endl;

	vector<string>::iterator it = carts.begin();

	for (it = carts.begin(); it != carts.end(); it++) {
		if (*it == "ȭ����") {
			carts.erase(it);
			break;
		}
	}
	
	cout << "========================" << endl;
	cout << "*** carts ����Ʈ ��� ***" << endl;
	for (auto cart : carts) {
		cout << cart << " ";
	}





	return 0;
}