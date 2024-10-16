#include "ClapTrap.hpp"

int main() {
	ClapTrap noname;
	ClapTrap player("USEC 3");
	ClapTrap bot("Shturman");

	noname.attack("Nothing");
	std::cout << std::endl;

	player.attack(bot.getName());
	bot.takeDamage(1);
	std::cout << std::endl;

	bot.attack(player.getName());
	player.takeDamage(1);
	std::cout << std::endl;

	std::cout << "NATO entered the chat." << std::endl;
	std::cout << "NATO said: STOP FIGHTING!" << std::endl;
	std::cout << std::endl;
	player.beRepaired(1);
	bot.beRepaired(1);
	std::cout << std::endl;
}
