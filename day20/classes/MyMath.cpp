//day19-9
//day20-1
#include<iostream>
using namespace std;

class MyMath {
public:
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}
	static int min(int x, int y) {
		return x > y ? y : x;
	}
};

int main() {
	/*
	MyMath math1;
	cout << "abs : " << math1.abs(-5) << endl;
	*/
	cout << "abs : " << MyMath::abs(-5) << endl;

	cout << "min : " << MyMath::min(6, 7) << endl;



	return 0;
}