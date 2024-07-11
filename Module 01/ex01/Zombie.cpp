#include "Zombie.hpp"

Zombie::Zombie() { };

Zombie::Zombie( std::string nm ) {
	name = nm;
}

Zombie::~Zombie() {
	std::cout << "Destroyed " << name << std::endl;
}

void Zombie::setName( std::string nm){
	name = nm;
};

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}