#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

/*Dog::Dog(std::string tp) {
	std::cout << "Dog constructor called." << std::endl;
	this->type = tp;
}*/

Dog::Dog(const Dog& copyDog) : AAnimal(copyDog) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = copyDog.type;
	this->brain = new Brain(*copyDog.brain);
}

Dog &Dog::operator=(const Dog& op) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &op)
	{
		delete this->brain;
		this->type = op.type;
		this->brain = new Brain(*op.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}

// Functions

void Dog::makeSound() const {
	if(this->type == "Dog")
		std::cout << "Woof woof. Pet me!" << std::endl;
}

void Dog::exteriorize(int index) const {
	std::cout << this->brain->exteriorize(index) << std::endl;
}