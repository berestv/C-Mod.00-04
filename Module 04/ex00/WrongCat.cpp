#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

/*WrongCat::WrongCat(std::string tp) {
	std::cout << "WrongCat constructor called." << std::endl;
	this->type = tp;
}*/

WrongCat::WrongCat(const WrongCat& copyWrongCat) : WrongAnimal(copyWrongCat) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->type = copyWrongCat.type;
}

WrongCat &WrongCat::operator=(const WrongCat& op) {
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this != &op)
		this->type = op.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

// Functions

void WrongCat::makeSound() const {
	if (this->type == "WrongCat")
		std::cout << "Meow meow. Pet me!" << std::endl;
}