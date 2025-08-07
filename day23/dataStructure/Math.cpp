//day23-1
#include<iostream>
using namespace std;

/*
	template(템플릿)
	함수나 클래스 코드를 찍어내듯이 생산할 수 있도록 일반화 시키는 도구
*/

class Math {
public:
	//템플릿의 T 자료형 선언
	template <typename T>
	static T abs(T x) {
		return (x < 0) ? -x : x;
	}

	template <typename T>
	static T max(T x, T y) {
		return (x > y) ? x : y;
	}
};

int main() {
	cout << Math::abs(-10) << endl;
	cout << Math::abs(-3.5) << endl;

	cout << Math::max(44, 45) << endl;
	cout << Math::max(4.4, 4.5) << endl;


	return 0;
}