#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &matSrc) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &matSrc) {
	if (this != &matSrc)
		*this = matSrc;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
}

// FUNCTIONS

void MateriaSource::learnMateria(AMateria* mt) {
	bool full = true;

	for (int i = 0; i < 4; i++) {
		if (!this->mats[i])
		{
			this->mats[i] = mt;
			full = false;
		}
	}

	if (full)
		std::cout << "Cannot learn more materias!" << std::endl;
	else
		std::cout << "Materia was successfully learnt!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->mats[i]->getType() == type)
		{
			std::cout << "Materia created successfully!" << std::endl;
			return this->mats[i]->clone();
		}
	}
	std::cout << "Materia hasn't been learned yet." << std::endl;
	return 0;
}