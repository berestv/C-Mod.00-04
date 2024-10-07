#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &matSrc) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = matSrc;

}

MateriaSource &MateriaSource::operator=(const MateriaSource &matSrc) {
	if (this != &matSrc)
		*this = matSrc;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->mats[i])
			delete this->mats[i];
	}
}

// FUNCTIONS

void MateriaSource::learnMateria(AMateria* mt) {
	for (int i = 0; i < 4; i++) {
		if (!this->mats[i])
		{
			this->mats[i] = mt;
			std::cout << this->mats[i]->getType() << " was learned successfully!" << std::endl;
			return ;
		}
	}
	std::cout << "Cannot learn more materias!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (this->mats[i] && (this->mats[i]->getType() == type))
		{
			std::cout << "Materia created successfully!" << std::endl;
			return this->mats[i]->clone();
		}
	}
	std::cout << type << " hasn't been learned yet." << std::endl;
	return 0;
}