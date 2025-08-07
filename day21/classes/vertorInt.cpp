//day21-1
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> vec;
	// vector<자료형> 자료명
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	cout << vec.at(1) << endl;

	vec.at(1) = 20;
	cout << vec.at(1) << endl;


	return 0;
}