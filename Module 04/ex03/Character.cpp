#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called." << std::endl;
	this->name = "Steve";
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = 0;
	}
	for (int i = 0; i < VSIZE; i++) {
		this->vicinity[i] = 0;
	}
}

Character::Character(std::string nm) {
	std::cout << "Character constructor called." << std::endl;
	this->name = nm;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = 0;
	}
	for (int i = 0; i < VSIZE; i++) {
		this->vicinity[i] = 0;
	}
}

Character::Character(const Character &chr) {
	std::cout << "Character copy constructor called." << std::endl;
	this->name = chr.name;
	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
		this->inventory[i] = chr.inventory[i]->clone();
	}
	for (int i = 0; i < VSIZE; i++) {
		delete this->vicinity[i];
		this->vicinity[i] = chr.vicinity[i]->clone();
	}
}

Character &Character::operator=(const Character &chr) {
	std::cout << "Character copy assignment operator called." << std::endl;
	if (this != &chr)
	{
		this->name = chr.name;
		for (int i = 0; i < 4; i++) {
			delete this->inventory[i];
			this->inventory[i] = chr.inventory[i]->clone();
		}
		for (int i = 0; i < VSIZE; i++) {
			delete this->vicinity[i];
			this->vicinity[i] = chr.vicinity[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < VSIZE; i++) {
		delete vicinity[i];
	}
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
	}
}

// FUNCTIONS

const std::string &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	int i;

	for (i = 0; i < 4; i++) {
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	delete m;

/*	if (full)
		std::cout << "Inventory full! You need to unequip something first before equipping " << m->getType() << "." << std::cout;
	else
		std::cout << m->getType() << " was equipped in slot " << i << "." << std::endl;
	if(!full)
		std::cout << this->inventory[i]->getType() << " was equipped in slot " << i << "." << std::endl;*/
}

void Character::unequip(int idx) {
	if ((idx >= 0 && idx <= 3) && this->inventory[idx])
	{
		std::cout << "Unequipped " << this->inventory[idx]->getType() << "." << std::endl;
		handleVic(*this->inventory[idx]);
		this->inventory[idx] = NULL;
	}
/*	else
		std::cout << "Nothing on that slot!" << std::endl;*/
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 && idx <= 3) && this->inventory[idx]){
		//std::cout << "Take that, " << target.getName() << "!" << std::endl;
		this->inventory[idx]->use(target);
	}
/*	else
		std::cout << "No materia in slot " << idx << "." << std::endl;*/
}

void Character::handleVic(AMateria &m) {
	static int index = 0;

	if (index > VSIZE)
		index = 0;
	if (this->vicinity[index])
		delete this->vicinity[index];
	this->vicinity[index] = &m;
}