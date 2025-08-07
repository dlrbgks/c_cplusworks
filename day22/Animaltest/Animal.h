#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
	void breathe();
	virtual void cry() = 0;
	virtual ~Animal();
};

#endif // !ANIMAL_H
