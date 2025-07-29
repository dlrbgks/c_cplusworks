//day17-2
#include<iostream>
using namespace std;

class Dog
{
public:
	Dog(string type, int age);
	~Dog();
	string getType();
	void setType(string type);
	int getAge();
	void setAge(int age);
private:
	string type;
	int age;
};

Dog::Dog(string type = "Unknown", int age = 0)
{
	setAge(age);
	setType(type);
}

Dog::~Dog()
{
	cout << "delete data" << endl;
}

int Dog::getAge() {
	return age;
}
void Dog::setAge(int age) {
	this->age = age;
}
string Dog::getType() {
	return type;
}
void Dog::setType(string type) {
	this->type = type;
}

int main() {

	Dog dog1("ÁøµÀ°³", 3);
	dog1.setType("Çªµé");
	cout << dog1.getType() << endl;





	return 0;
}