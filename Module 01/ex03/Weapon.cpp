#include "Weapon.hpp"

Weapon::Weapon( std::string wp ){
	type = wp;
};

Weapon::~Weapon() {}

std::string Weapon::getType() const {
	return type;
}

void Weapon::setType ( std::string tp ){
	type = tp;
}