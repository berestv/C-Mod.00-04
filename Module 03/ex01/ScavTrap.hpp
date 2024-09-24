#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string nm);
	ScavTrap(const ScavTrap& c);
	ScavTrap &operator=(const ScavTrap& op);

	void guardGate();
};

#endif //SCAVTRAP_HPP
