#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
private:
	std::string mType;

public:
	Cure();
	Cure(const Cure& ic);
	Cure &operator=(const Cure& ic);
	~Cure();

	std::string& getType();
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif //CURE_HPP
