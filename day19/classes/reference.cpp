//19-4
#include<iostream>
using namespace std;

void swapVal(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
void swapRef(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	//참조자 - 기존의 메모리에 별명(alias)을 붙이는 방법(포인처와 유사함)
	/*
	int n = 1;
	int& x = n;
	int& y = n;

	cout << n << endl;
	cout << x << endl;
	cout << y << endl;

	x = 3;
	cout << n << endl;
	cout << x << endl;
	cout << y << endl;
	*/

	int x = 10, y = 20;
	swapVal(x, y);
	cout << "call by value : " << x << ", " << y << endl;
	swapRef(x, y);
	cout << "call by reference : " << x << ", " << y << endl;

	return 0;
}