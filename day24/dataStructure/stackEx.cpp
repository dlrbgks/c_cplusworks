//day24-1 (day23-6)
#include<iostream>
#include<stack>
using namespace std;

int main() {

	stack<int> stk;

	stk.push(10);
	stk.push(20);
	stk.push(30);


	cout << "stack size : " << stk.size() << endl;
	//특정요소 검색 - 불가능
	// 선입 후출 시스템(LIFO)


	cout << stk.top() << endl;
	stk.pop();
	cout << stk.top() << endl;
	stk.pop();
	cout << stk.top() << endl;
	stk.pop();
	if (stk.empty()) {
		cout << "Stack empty!" << endl;
	}
	else {
		cout << "Stack exist!" << endl;
	}

	if (!stk.empty()) {
		stk.pop();
	}
	else {
		cout << "스택이 비어있어서 삭제 불가능" << endl;
	}





	return 0;
}