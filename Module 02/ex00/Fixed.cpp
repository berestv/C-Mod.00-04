#include "Fixed.hpp"

Fixed::Fixed() : fxp(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& c) : fxp(c.fxp) {
	std::cout << "Copy constructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &op) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &op)
		this->setRawBits(op.getRawBits());
	return *this;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fxp;
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	fxp = raw;
}