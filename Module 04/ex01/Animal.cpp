#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called." << std::endl;
}

/*Animal::Animal(std::string tp) : type(tp) {
	std::cout << "Animal constructor called." << std::endl;
}*/

Animal::Animal(const Animal& c) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = c;
}

Animal &Animal::operator=(const Animal& op) {
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &op)
		this->type = op.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

// Functions

void Animal::makeSound() const {
	std::cout << "I'm a confused Animal" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}


void Animal::exteriorize(int index) const {
	std::cout << "I'm just an animal. " << index << std::endl;
}