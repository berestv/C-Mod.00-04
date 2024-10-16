#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal default constructor called." << std::endl;
}

/*AAnimal::AAnimal(std::string tp) : type(tp) {
	std::cout << "AAnimal constructor called." << std::endl;
}*/

AAnimal::AAnimal(const AAnimal& c) {
	std::cout << "AAnimal copy constructor called." << std::endl;
	this->type = c.getType();
}

AAnimal &AAnimal::operator=(const AAnimal& op) {
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	if (this != &op)
		this->type = op.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called." << std::endl;
}

// Functions

void AAnimal::makeSound() const {
	std::cout << "I'm a confused AAnimal" << std::endl;
}

std::string AAnimal::getType() const {
	return this->type;
}


void AAnimal::exteriorize(int index) const {
	std::cout << "I'm just an AAnimal. " << index << std::endl;
}