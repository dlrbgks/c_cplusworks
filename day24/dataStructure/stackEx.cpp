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
	//Ư����� �˻� - �Ұ���
	// ���� ���� �ý���(LIFO)


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
		cout << "������ ����־ ���� �Ұ���" << endl;
	}





	return 0;
}