#include "Zombie.hpp"

Zombie::Zombie( std::string nm ) {
	name = nm;
}
Zombie::~Zombie() {
	std::cout << "Destroyed " << name << std::endl;
}

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}