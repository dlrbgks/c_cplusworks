//day23-1
#include<iostream>
using namespace std;

/*
	template(���ø�)
	�Լ��� Ŭ���� �ڵ带 ������ ������ �� �ֵ��� �Ϲ�ȭ ��Ű�� ����
*/

class Math {
public:
	//���ø��� T �ڷ��� ����
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