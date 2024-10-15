#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

/* int main() {
     Fixed a(5);
     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

     std::cout << "a is " << a << std::endl;
     std::cout << "b is " << b << std::endl;

     // Exemplos de operadores de comparação
     std::cout << "a == b : " << (a == b) << std::endl;
     std::cout << "a != b : " << (a != b) << std::endl;
     std::cout << "a < b  : " << (a < b) << std::endl;
     std::cout << "a > b  : " << (a > b) << std::endl;
     std::cout << "a <= b : " << (a <= b) << std::endl;
     std::cout << "a >= b : " << (a >= b) << std::endl;

 		std::cout << "a + b = " << a.getRawBits() << std::endl;
 		std::cout << "a + b = " << b.getRawBits() << std::endl;

 // Exemplos de operadores aritméticos
     Fixed sum = a + b;
     std::cout << "a + b = " << sum << std::endl;

     Fixed difference = a - b;
     std::cout << "a - b = " << difference << std::endl;

     Fixed product = a * b;
     std::cout << "a * b = " << product << std::endl;

     Fixed quotient = a / b;
     std::cout << "a / b = " << quotient << std::endl;

     return 0;
 }*/

/*
 int main( void )
 {
 	Fixed a;
 	Fixed const b( 10 );
 	Fixed const c( 42.42f );
 	Fixed const d( b );

 	std::cout << a << std::endl;
 	std::cout << ++a << std::endl;
 	std::cout << a << std::endl;
 	std::cout << a++ << std::endl;
 	std::cout << a << std::endl;

 	a = Fixed( 1234.4321f );

 	std::cout << "a is " << a << std::endl;
 	std::cout << "b is " << b << std::endl;
 	std::cout << "c is " << c << std::endl;
 	std::cout << "d is " << d << std::endl;

 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

 // Exemplos de operadores aritméticos
     Fixed sum = a + b;
     std::cout << "a + b = " << sum << std::endl;

     Fixed difference = a - b;
     std::cout << "a - b = " << difference << std::endl;

     Fixed product = a * b;
     std::cout << "a * b = " << product << std::endl;

     Fixed quotient = a / b;
     std::cout << "a / b = " << quotient << std::endl;

 	return 0;
 }*/
