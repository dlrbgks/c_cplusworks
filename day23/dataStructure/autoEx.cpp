//day23-3
#include<iostream>
#include<vector>
using namespace std;

int main() {
	/*
		auto 자료형 = 변수 선언 시에 변수의 타입을 결정하도록 지시
		auto는 변수 타입을 자동 추론 가능하다
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