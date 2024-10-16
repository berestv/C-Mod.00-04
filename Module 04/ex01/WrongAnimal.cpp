#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

/*WrongAnimal::WrongAnimal(std::string tp) : type(tp) {
	std::cout << "WrongAnimal constructor called." << std::endl;
}*/

WrongAnimal::WrongAnimal(const WrongAnimal& c) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->type = c.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& op) {
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this != &op)
		this->type = op.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// Functions

void WrongAnimal::makeSound() const {
	std::cout << "I'm a genetic mutation." << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}