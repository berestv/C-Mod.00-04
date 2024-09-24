#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called." << std::endl;
	name = "CheekiBreeki";
	hp = 100;
	enrg = 50;
	atk = 20;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm) {
	std::cout << "ScavTrap constructor called." << std::endl;
	name = nm;
	hp = 100;
	enrg = 50;
	atk = 20;
}

ScavTrap::ScavTrap(const ScavTrap &c) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op) {
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
}

// --------- FUNCTIONS ---------

void ScavTrap::guardGate() {
	std::cout << this->name << " guarding UN Roadblock. Extraction will be impossible." << std::endl;
}