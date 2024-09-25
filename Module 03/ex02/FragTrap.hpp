#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string nm);
	FragTrap(const FragTrap& c);
	FragTrap &operator=(const FragTrap& op);
	~FragTrap();

	void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP
