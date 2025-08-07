//day22-6
#include<iostream>
using namespace std;

class Animal {
public:
	
	virtual ~Animal() {}

	void breathe() {
		cout << "���� ���ϴ�.\n";
	}

	virtual void cry() = 0;
};

class Cat : public Animal {
public:
	void cry() override {
		cout << "�߿�" << endl;
	}

	~Cat() override {
		cout << "Cat �Ҹ��� ȣ��" << endl;
	}
};

class Dog : public Animal {
public:
	void cry() override {
		cout << "��! ��!" << endl;
	}

	~Dog() override {
		cout << "Dog �Ҹ��� ȣ��" << endl;
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

	//������ü
	Animal* cat = new Cat;
	cat->cry();
	Animal* dog = new Dog;
	dog->cry();


	delete cat;
	delete dog;



	return 0;
}