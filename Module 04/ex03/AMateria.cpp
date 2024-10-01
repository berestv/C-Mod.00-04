#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called";
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}


// FUNCTIONS

const std::string &AMateria::getType() const {
	return this->type;
}