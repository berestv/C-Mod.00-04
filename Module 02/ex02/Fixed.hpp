#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
private:
	int fxp;
	static const int frac = 8;
public:
	Fixed();
	Fixed(const Fixed& c);
	Fixed& operator=(const Fixed& op);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();

	bool operator>(const Fixed &op) const;
	bool operator<(const Fixed &op) const;
	bool operator>=(const Fixed &op) const;
	bool operator<=(const Fixed &op) const;
	bool operator==(const Fixed &op) const;
	bool operator!=(const Fixed &op) const;

	Fixed operator+(const Fixed &op) const;
	Fixed operator-(const Fixed &op) const;
	Fixed operator*(const Fixed &op) const;
	Fixed operator/(const Fixed &op) const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	int getRawBits () const;
	void setRawBits (int raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif //FIXED_HPP
