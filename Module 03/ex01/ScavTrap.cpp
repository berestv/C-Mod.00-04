#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called." << std::endl;
	name = "CheekiBreeki";
	hp = 100;
	enrg = 50;
	atk = 20;
	guarding = false;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm) {
	std::cout << "ScavTrap constructor called." << std::endl;
	name = nm;
	hp = 100;
	enrg = 50;
	atk = 20;
	guarding = false;
}

ScavTrap::ScavTrap(const ScavTrap &c) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->name = c.name;
	this->hp = c.hp;
	this->enrg = c.enrg;
	this->atk = c.atk;
	guarding = false;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op) {
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &op)
	{
		this->name = op.name;
		this->hp = op.hp;
		this->enrg = op.enrg;
		this->atk = op.atk;
		guarding = false;
	}
	return *this;
}

// --------- FUNCTIONS ---------

void ScavTrap::guardGate() {

	if(!guarding)
	{
		guarding = true;
		std::cout << this->name << " guarding UN Roadblock. Attack damage increased. Extraction will be impossible." << std::endl;
	}
	else
	{
		std::cout << this->name << " is wandering around the Woods hoping to find a target." << std::endl;
		guarding = false;
	}
}

void ScavTrap::attack(const std::string &target) {
	if (this->enrg <= 0)
		std::cout << "Can't attack! No energy left." << std::endl;
	else
	{
		this->enrg--;
		if (guarding)
			std::cout << "ScavTrap " << this->name << " attacks " << target <<
				  	" with a mounted AGS-30 30x29mm automatic grenade launcher, for " << this->atk <<
				  	"points of damage. Energy after attack: "<< this->enrg << std::endl;
		else
			std::cout << "ScavTrap " << this->name << " attacks " << target <<
					 " with a TOZ-106 for " << this->atk << "points of damage. Energy after attack: "<< this->enrg << std::endl;
	}
}