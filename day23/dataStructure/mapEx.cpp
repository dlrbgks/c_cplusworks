//day23-4
#include<iostream>
#include<map>
using namespace std;

int main() {
	/*
		map - Ű�� ���� ���� ���ҷ� ����
			  �˻��� ��� Ű�� �̿�
	*/

	map<string, int> dogs;
	dogs.insert({ "��Ƽ��", 3 });
	dogs.insert({ "������", 2 });
	dogs.insert({ "�ҵ�", 4 });

	cout << dogs.size() << endl;
	
	cout << dogs["��Ƽ��"] << "��\n";
	cout << dogs.at("��Ƽ��") << "��\n";
	map<string, int>::iterator it;
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << ", " << it->second << endl;
	}


	dogs["�ҵ�"] = 1;
	for (auto dog : dogs) {
		cout << dog.first << ", " << dog.second << endl;
	}

	cout << "-------------------" << endl;
	dogs.erase("��Ƽ��");
	for (auto dog : dogs) {
		cout << dog.first << ", " << dog.second << endl;
	}














	return 0;
}