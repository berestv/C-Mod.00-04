#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

/*Dog::Dog(std::string tp) {
	std::cout << "Dog constructor called." << std::endl;
	this->type = tp;
}*/

Dog::Dog(const Dog& copyDog) : Animal(copyDog) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = copyDog.type;
}

Dog &Dog::operator=(const Dog& op) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &op)
		this->type = op.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

// Functions

void Dog::makeSound() const {
	if(this->type == "Dog")
		std::cout << "Woof woof. Pet me!" << std::endl;
}