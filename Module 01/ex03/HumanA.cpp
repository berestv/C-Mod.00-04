#include "HumanA.hpp"

HumanA::HumanA( std::string nm, Weapon &wp) : name(nm), weapon(wp) { }

HumanA::~HumanA() { }

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}