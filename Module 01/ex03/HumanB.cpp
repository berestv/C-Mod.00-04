#include "HumanB.hpp"

HumanB::HumanB(std::string nm) : name(nm), weapon(NULL) { }

HumanB::HumanB(std::string nm, Weapon &wp) : name(nm), weapon(&wp) { }

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &wp) {
	weapon = &wp;
}

void HumanB::attack() {
	if (!weapon)
		std::cout << name << " attacks with a rock he found on the ground";
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}


