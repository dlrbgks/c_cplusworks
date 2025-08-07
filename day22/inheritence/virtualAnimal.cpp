//day22-6
#include<iostream>
using namespace std;

class Animal {
public:
	
	virtual ~Animal() {}

	void breathe() {
		cout << "¼ûÀ» ½±´Ï´Ù.\n";
	}

	virtual void cry() = 0;
};

class Cat : public Animal {
public:
	void cry() override {
		cout << "¾ß¿Ë" << endl;
	}

	~Cat() override {
		cout << "Cat ¼Ò¸êÀÚ È£Ãâ" << endl;
	}
};

class Dog : public Animal {
public:
	void cry() override {
		cout << "¿Ð! ¿Ð!" << endl;
	}

	~Dog() override {
		cout << "Dog ¼Ò¸êÀÚ È£Ãâ" << endl;
	}
};

int main() {
	/*
	Cat c1;
	c1.breathe();
	c1.cry();

	Dog d1;
	d1.breathe();
	d1.cry();
	*/

	//µ¿Àû°´Ã¼
	Animal* cat = new Cat;
	cat->cry();
	Animal* dog = new Dog;
	dog->cry();


	delete cat;
	delete dog;



	return 0;
}