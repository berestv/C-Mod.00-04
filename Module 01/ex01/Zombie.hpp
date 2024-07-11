#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie( std::string nm);
	~Zombie();

	void setName( std::string nm );
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP
