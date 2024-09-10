#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;

public:
	Weapon( std::string wp );
	~Weapon();

	std::string getType() const;
	void setType( std::string tp );
};

#endif //WEAPON_HPP
