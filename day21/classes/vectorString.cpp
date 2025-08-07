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

	// 사전정렬(단어 첫글자, 아스키코드 크기로 정렬)
	// 사전에서 가장 뒤에 나오는 이름
	string name;
	name = vec.at(0);
	for (int i = 0; i < vec.size(); i++) {
		if (name < vec[i])
			name = vec[i];
	}
	cout << name << endl;







	return 0;
}