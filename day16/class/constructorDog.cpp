//day16-4
#include<iostream>
using namespace std;

class Dog
{
public:
	string type;
	int age;

	Dog(string type, int age);
	~Dog();

	void showInfo() {
		cout << "Dog species : " << type << endl;
		cout << "Dog age : " << age << endl;
	}

	void bark() {
		cout << "(crowling)" << endl;
	}

};

Dog::Dog(string type = "Unknown", int age = 0) {
	this->type = type;
	this->age = age;
}
Dog::~Dog() {

}

int main() {

	Dog dog1;
	dog1.age = 4;
	dog1.type = "Puddle";
	dog1.showInfo();
	dog1.bark();

	Dog dog2;
	dog2.age = 3;
	dog2.type = "Husky";
	dog2.showInfo();

	Dog dog3;
	dog3.showInfo();

	Dog dog4("Fomeranian", 2);
	dog4.showInfo();
	dog4.bark();


	return 0;
}