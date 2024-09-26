#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* brain;

public:
	Dog();
	//Dog(std::string tp);
	Dog(const Dog &copyDog);
	Dog &operator=(const Dog &op);
	~Dog();

	void makeSound() const;
	std::string exteriorize(int index) const;
};

#endif //DOG_HPP
