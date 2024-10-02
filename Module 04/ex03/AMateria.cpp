#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria constructor called" << std::endl;
	this->mType = type;
}

AMateria::AMateria(const AMateria &am) {
	std::cout << "AMateria copy constructor called" << std::endl;
	this->mType = am.mType;
}

AMateria &AMateria::operator=(const AMateria &am) {
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &am)
		this->mType = am.mType;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

// FUNCTIONS

const std::string &AMateria::getType() const {
	return this->mType;
}

void AMateria::use(ICharacter &target) {
	target.getName();
}