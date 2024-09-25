#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << this->name << "'s FragTrap default constructor called." << std::endl;
	this->name = "Alex";
	this->hp = 100;
	this->enrg = 100;
	this->atk = 30;
}

FragTrap::FragTrap(std::string nm) : ClapTrap(nm) {
	std::cout << this->name << "'s FragTrap constructor called." << std::endl;
	this->name = nm;
	this->hp = 100;
	this->enrg = 100;
	this->atk = 30;
}

FragTrap::FragTrap(const FragTrap &c) : ClapTrap(c) {
	std::cout << this->name << "'s FragTrap copy constructor called." << std::endl;
	this->name = c.name;
	this->hp = c.hp;
	this->enrg = c.enrg;
	this->atk = c.atk;
}

FragTrap &FragTrap::operator=(const FragTrap &op) {
	std::cout << this->name << "'s FragTrap copy assignment operator called." << std::endl;
	if (this != &op)
	{
		this->name = op.name;
		this->hp = op.hp;
		this->enrg = op.enrg;
		this->atk = op.atk;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << this->name << "'s FragTrap destructor called." << std::endl;
}

// Functions

void FragTrap::highFivesGuys() {
	std::cout << this->name << ": Hey, down for a party? *high-fives everyone*" << std::endl;
	std::cout << this->name << ": Great job, people!" << std::endl;
}