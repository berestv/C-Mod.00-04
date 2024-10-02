#include "Ice.hpp"

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	this->mType = "ice";
}

Ice::Ice(const Ice &ic) {
	std::cout << "Ice copy constructor called" << std::endl;
	this->mType = ic.mType;
}

Ice &Ice::operator=(const Ice &ic) {
		std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &ic)
		this->mType = ic.mType;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

// FUNCTIONS

const std::string &Ice::getType() {
	return this->mType;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}