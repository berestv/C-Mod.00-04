#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	~MateriaSource() {}
	void learnMateria(AMateria*) = 0;
	AMateria* createMateria(std::string const & type) = 0;
};

#endif //MATERIASOURCE_HPP
