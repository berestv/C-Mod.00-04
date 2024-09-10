#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB( std::string nm );
	HumanB( std::string nm, Weapon &wp );
	~HumanB();

	void setWeapon( Weapon &wp );
	void attack();
};

#endif //HUMANB_HPP
