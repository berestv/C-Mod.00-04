#include "Fixed.hpp"

Fixed::Fixed() : fxp(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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

Fixed::Fixed(const int i) : fxp(i << frac) {
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float f) : fxp(static_cast<int>(roundf(f * (1 << frac)))) {
	std::cout << "Float constructor called" << std::endl;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

float Fixed::toFloat() const {
	return (static_cast<float>(fxp) / (1 << frac));
}

int Fixed::toInt() const {
	return fxp >> frac;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return fxp;
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	fxp = raw;
}