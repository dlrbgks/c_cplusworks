//day23-2
#include<iostream>
#include<vector>

using namespace std;

int main() {
	// ������ ��� ������ ���� �ν��Ͻ�
	vector<int> vec;

	vec.push_back(80);
	vec.push_back(75);
	vec.push_back(90);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}
	cout << "--------------" << endl;
	cout << vec.front() << endl << vec[0] << endl << vec.back() << endl;
	cout << "--------------" << endl;

	vector<int>::iterator it = vec.begin();
	// �������� ������ ���
	cout << *it << endl;
	cout << *(it + 1) << endl;
	cout << *(it + 2) << endl;
	
	vec[1] = 100;
	//vec.pop_back();
	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 90) {
			vec.erase(it);
			break;
		}
	}

	cout << "--------------" << endl;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}



	return 0;
}