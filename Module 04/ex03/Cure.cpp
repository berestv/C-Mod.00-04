#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &ic) : AMateria() {
	std::cout << "Cure copy constructor called" << std::endl;
	this->mType = ic.mType;
}

Cure &Cure::operator=(const Cure &ic) {
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &ic)
		this->mType = ic.mType;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

// FUNCTIONS

std::string &Cure::getType() {
	return this->mType;
}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}