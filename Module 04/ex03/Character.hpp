#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define VSIZE 2

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria* inventory[4];
	AMateria* vicinity[VSIZE];

	void handleVic(AMateria& m);
public:
	Character();
	explicit Character(std::string nm);
	~Character();
	Character(const Character& chr);
	Character &operator=(const Character& chr);

	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif //CHARACTER_HPP
