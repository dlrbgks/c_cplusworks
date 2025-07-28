//day16-3
#include<iostream>
using namespace std; 

class Dog
{
public:
	string type;
	int age;

	void showInfo() {
		cout << "Dog species : " << type << endl;
		cout << "Dog age : " << age << endl;
	}



};

int main() {

	Dog dog1;
	dog1.age = 4;
	dog1.type = "Puddle";
	dog1.showInfo();

	Dog dog2;
	dog2.age = 3;
	dog2.type = "Husky";
	dog2.showInfo();








	return 0;
}