#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria* mats[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& matSrc);
	MateriaSource &operator=(const MateriaSource& matSrc);
	~MateriaSource();

	void learnMateria(AMateria* mt);
	AMateria* createMateria(std::string const & type);
};

#endif //MATERIASOURCE_HPP
