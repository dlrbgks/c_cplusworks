//day17-1
#include<iostream>
using namespace std;

class Dog
{
public:
	Dog(string type, int age);
	~Dog();
	string type;
	int age;

	void dogInfo();
	void bark();

private:

};

Dog::Dog(string type = "Unknown", int age = 0)
{
	this->type = type;
	this->age = age;
	cout << "�������Դϴ�.\n";
}

Dog::~Dog()
{
	cout << "�Ҹ����Դϴ�.\n";
}

void Dog::dogInfo() {
	cout << "Dog type : " << type << endl;
	cout << "Dog age : " << age << endl;
}

void Dog::bark() {
	cout << "�� ��" << endl;
}

int main() {

	Dog dog1("������", 3);
	dog1.bark();
	dog1.dogInfo();
	dog1.bark();






	return 0;
}