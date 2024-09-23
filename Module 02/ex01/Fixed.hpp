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

	int getRawBits (void) const;
	void setRawBits (int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif //FIXED_HPP
