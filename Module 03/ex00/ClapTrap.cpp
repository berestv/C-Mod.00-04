#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nm) : name(nm), hp(10), enrg(10), atk(0) {

}

ClapTrap::ClapTrap(const ClapTrap &c) {

}

ClapTrap &ClapTrap::operator=(const ClapTrap &op) {

}

void ClapTrap::attack(const std::string &target) {
	if (this->enrg <= 0)
		std::cout << "Can't attack! No energy left." << std::endl;
	else if (this->hp <= 0)
		std::cout << "ClapTrap got clapped." << std::endl;
	else
	{
		this->enrg--;
		std::cout << "ClapTrap attacks " << target << ", causing " << this->atk << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp <= 0)
		std::cout << "ClapTrap is already dead. Please stop." << std::endl;
	else if (this->enrg <= 0)
		std::cout << "Too exhausted for a fight...Please come back later." << std::endl;
	else
	{
		this->hp -= amount;
		std::cout << "Ouch! ClapTrap received " << amount << " points of damage! Current HP: " << this->hp << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->enrg <= 0)
		std::cout << "Can't attack! No energy left." << std::endl;
	else if (this->hp <= 0)
		std::cout << "ClapTrap got clapped." << std::endl;
	else
	{
		this->enrg--;
		this->hp += amount;
		std::cout << "ClapTrap repaired " << amount << " hit points. Current HP: " << this->hp << std::endl;
	}
}
