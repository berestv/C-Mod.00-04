#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap player("USEC 3");
	ClapTrap bot("Shturman");
	ScavTrap raider("Kobra");
	std::cout << std::endl;

	player.attack(bot.getName());
	bot.takeDamage(2);
	std::cout << std::endl;

	bot.attack(player.getName());
	player.takeDamage(bot.getDmg());
	std::cout << std::endl;

	raider.attack(player.getName());
	player.takeDamage(9);
	std::cout << std::endl;

	raider.guardGate();
	raider.attack(bot.getName());
	bot.takeDamage(raider.getDmg());
	std::cout << std::endl;

	player.beRepaired(1);
	bot.beRepaired(1);
	std::cout << std::endl;

	raider.guardGate();
	raider.attack(player.getName());
	player.takeDamage(raider.getDmg());
	std::cout << std::endl;
}
