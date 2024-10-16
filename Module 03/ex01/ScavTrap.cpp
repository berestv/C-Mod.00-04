#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called." << std::endl;
	name = "CheekiBreeki";
	this->hp = 100;
	this->enrg = 50;
	this->atk = 20;
	this->guarding = false;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap(nm) {
	std::cout << "ScavTrap constructor called." << std::endl;
	this->name = nm;
	this->hp = 100;
	this->enrg = 50;
	this->atk = 20;
	this->guarding = false;
}

ScavTrap::ScavTrap(const ScavTrap &c) : ClapTrap(c) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	this->name = c.name;
	this->hp = c.hp;
	this->enrg = c.enrg;
	this->atk = c.atk;
	this->guarding = false;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op) {
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &op)
	{
		this->name = op.name;
		this->hp = op.hp;
		this->enrg = op.enrg;
		this->atk = op.atk;
		this->guarding = false;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called." << std::endl;
}

// --------- FUNCTIONS ---------

void ScavTrap::guardGate() {

	if(!guarding)
	{
		guarding = true;
		this->atk += 20;
		std::cout << this->name << " gatekeeping UN Roadblock. Attack damage increased. Extraction will be impossible." << std::endl;
	}
	else
	{
		guarding = false;
		this->atk -= 20;
		std::cout << this->name << " is now wandering around the Woods hoping to find a target." << std::endl;
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
					  " points of damage. Energy after attack: "<< this->enrg << std::endl;
		else
			std::cout << "ScavTrap " << this->name << " attacks " << target << " with a Beretta M9 for " << this->atk <<
						" points of damage. Energy after attack: "<< this->enrg << std::endl;
	}
}

std::string ScavTrap::getName() {
	return this->name;
}

unsigned int ScavTrap::getDmg() const {
	return this->atk;
}