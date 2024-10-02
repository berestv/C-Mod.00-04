#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called." << std::endl;
	this->name = "Steve";
}

Character::Character(std::string nm) {
	std::cout << "Character constructor called." << std::endl;
	this->name = nm;
}

Character::Character(const Character &chr) {
	std::cout << "Character copy constructor called." << std::endl;
	this->name = chr.name;
}

Character &Character::operator=(const Character &chr) {
	std::cout << "Character copy assignment operator called." << std::endl;
	if (this != &chr)
		*this = chr;
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}

// FUNCTIONS

const std::string &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	bool full = true;
	int i;

	for (i = 0; i < 4; i++) {
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			full = false;
		}
	}

/*	if (full)
		std::cout << "Inventory full! You need to unequip something first before equipping " << m->getType() << "." << std::cout;
	else
		std::cout << m->getType() << " was equipped in slot " << i << "." << std::endl;*/
	if(!full)
		std::cout << m->getType() << " was equipped in slot " << i << "." << std::endl;
}

void Character::unequip(int idx) {
	if (this->inventory[idx])
	{
		std::cout << "Unequipped " << this->inventory[idx]->getType() << "." << std::endl;
		delete this->inventory[idx];
	}
	else
		std::cout << "Nothing on that slot!" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (this->inventory[idx]){
		this->inventory[idx]->use(target);
	}
	else

}