#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string nm) {
	this->name = nm;
}

Character::Character(const Character &chr) {

}

Character &Character::operator=(const Character &chr) {
	if (this != &chr)
		*this = chr;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}

// FUNCTIONS

