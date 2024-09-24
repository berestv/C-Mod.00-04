#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
private:
	bool guarding;

public:
	ScavTrap();
	ScavTrap(std::string nm);
	ScavTrap(const ScavTrap& c);
	ScavTrap &operator=(const ScavTrap& op);

	void guardGate();
	void attack(const std::string& target);
};

#endif //SCAVTRAP_HPP
