//day24-3
#include<iostream>
#include<queue>
using namespace std;

int main() {
	queue<int> que;
	que.push(10);
	que.push(20);
	que.push(30);

	/*
	cout << que.front() << endl;
	que.pop();
	cout << que.front() << endl;
	*/
	/*
	while (!que.empty()) {
		cout << que.front() << " ";
		que.pop();
	}
	*/

	queue<string> q;
	q.push("绊按A");
	q.push("绊按B");
	q.push("绊按B");

	while (!q.empty()) {
		cout << q.front() << "丛 诀公 贸府吝..." << endl;
		q.pop();
	}



	return 0;
}