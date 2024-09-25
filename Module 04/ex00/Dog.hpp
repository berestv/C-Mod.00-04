#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	//Dog(std::string tp);
	Dog(const Dog &copyDog);
	Dog &operator=(const Dog &op);
	~Dog();

	void makeSound() const;
};

#endif //DOG_HPP
