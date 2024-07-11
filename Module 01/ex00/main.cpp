#include "Zombie.hpp"

int main()
{
	Zombie *alberto = newZombie("Alberto");
	alberto->announce();

	randomChump("Chumper");

	delete alberto;
	return 0;
}