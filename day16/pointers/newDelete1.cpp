//day16-1
#include<iostream>
using namespace std;

int main() {
	//������ ������
	int n = 3;
	int* p;
	p = &n;
	cout << n << endl;
	cout << *p << endl;
	cout << *p + 10 << endl;
	*p += 10;
	cout << n << endl;

	//������ ������(��������)
	int* ptr = new int;
	if (ptr == nullptr) {
		cout << "Can't allocate memory!" << endl;
		return 1;
	}
	*ptr = 5;
	cout << *ptr << endl;
	delete ptr;


	//������ ������(�迭)(��������)
	int* pa = new int[10];
	for (int i = 0; i < 10; i++) {
		pa[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << pa[i] << " ";
	}
	cout << endl <<"=============" << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(pa + i) << " ";
	}
	delete[] pa;










	return 0;
}