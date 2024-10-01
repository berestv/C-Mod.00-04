#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria* inventory[4];

public:
	Character();
	Character(std::string nm);
	Character(const Character& chr);
	Character &operator=(const Character& chr);
	~Character();
};

#endif //CHARACTER_HPP
