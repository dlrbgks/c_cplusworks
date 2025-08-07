//day24-2
#include<iostream>
#include<stack>
using namespace std;

int main() {
	stack<char> stk;
	stk.push('a');
	stk.push('b');
	stk.push('c');

	while (!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}

	cout << endl;

	string str;
	cout << "문자열 입력 : ";
	cin >> str;

	stack<char> stk2;

	for (auto c : str) {
		stk2.push(c);
	}

	cout << "Reverse char : ";
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}


	return 0;
}