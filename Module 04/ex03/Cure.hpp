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

	const std::string& getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif //CURE_HPP
