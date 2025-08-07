//day19-9
#include<iostream>
using namespace std;

class MyMath {
public:
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}
};

int main() {
	/*
	MyMath math1;
	cout << "abs : " << math1.abs(-5) << endl;
	*/
	cout << "abs : " << MyMath::abs(-5) << endl;





	return 0;
}