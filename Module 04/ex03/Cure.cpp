#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Ice default constructor called" << std::endl;
	this->mType = "cure";
}

Cure::Ice(const Cure &ic) {
	std::cout << "Ice copy constructor called" << std::endl;
	this->mType = ic.mType;
}

Cure &Cure::operator=(const Cure &ic) {
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &ic)
		this->mType = ic.mType;
	return *this;
}

Cure::~Cure() {
	std::cout << "Ice destructor called" << std::endl;
}

// FUNCTIONS

const std::string &Cure::getType() {
	return this->mType;
}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}