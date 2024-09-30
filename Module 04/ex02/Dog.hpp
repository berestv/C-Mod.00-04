#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain* brain;

public:
	Dog();
	//Dog(std::string tp);
	Dog(const Dog &copyDog);
	Dog &operator=(const Dog &op);
	~Dog();

	void makeSound() const;
	void exteriorize(int index) const;
};

#endif //DOG_HPP
