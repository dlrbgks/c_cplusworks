#ifndef DOG_H
#define DOG_H
#include"Animal.h"

class Dog : public Animal {

	void cry() override;
	~Dog() override;
};

#endif // !DOG_H
