//day21-2
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> vec;
	vec.push_back("jerry");
	vec.push_back("luna");
	vec.push_back("han");
	vec.push_back("elsa");

	cout << vec.size() << endl;

	cout << vec.at(2) << endl;

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}

	// ��������(�ܾ� ù����, �ƽ�Ű�ڵ� ũ��� ����)
	// �������� ���� �ڿ� ������ �̸�
	string name;
	name = vec.at(0);
	for (int i = 0; i < vec.size(); i++) {
		if (name < vec[i])
			name = vec[i];
	}
	cout << name << endl;







	return 0;
}