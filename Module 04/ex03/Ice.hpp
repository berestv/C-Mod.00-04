#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria {
private:
	std::string type;

	Ice();
	Ice(const Ice& ic);
	Ice &operator=(const Ice& ic);

};

#endif //ICE_HPP
