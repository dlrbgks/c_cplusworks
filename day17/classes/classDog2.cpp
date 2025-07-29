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
	cout << "»ı¼ºÀÚÀÔ´Ï´Ù.\n";
}

Dog::~Dog()
{
	cout << "¼Ò¸êÀÚÀÔ´Ï´Ù.\n";
}

void Dog::dogInfo() {
	cout << "Dog type : " << type << endl;
	cout << "Dog age : " << age << endl;
}

void Dog::bark() {
	cout << "¿Ğ ¿Ğ" << endl;
}

int main() {

	Dog dog1("ÁøµÀ°³", 3);
	dog1.bark();
	dog1.dogInfo();
	dog1.bark();






	return 0;
}