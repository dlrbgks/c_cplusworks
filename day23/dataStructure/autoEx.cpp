//day23-3
#include<iostream>
#include<vector>
using namespace std;

int main() {
	/*
		auto �ڷ��� = ���� ���� �ÿ� ������ Ÿ���� �����ϵ��� ����
		auto�� ���� Ÿ���� �ڵ� �߷� �����ϴ�
	*/
	auto ch = 'K';
	auto num = 12;
	auto unit = 2.54;
	auto* ip = &num;

	cout << ch << ", " << num << ", " << unit << ", " << *ip << endl;

	vector<int> vec = { 1, 2, 3 };
	for (auto v : vec) {
		cout << v << endl;
	}
	



	return 0;
}