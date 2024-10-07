#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
private:
	std::string mType;

public:
	Ice();
	Ice(const Ice& ic);
	Ice &operator=(const Ice& ic);
	~Ice();

	std::string getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif //ICE_HPP
