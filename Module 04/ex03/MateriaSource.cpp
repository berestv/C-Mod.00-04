#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		this->mats[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource &matSrc) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		if(matSrc.mats[i])
			this->mats[i] = matSrc.mats[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &matSrc) {
	if (this != &matSrc)
	{
		for (int i = 0; i < 4; i++) {
			if (this->mats[i])
				delete this->mats[i];
			if (matSrc.mats[i])
				this->mats[i] = matSrc.mats[i];
		}
	}
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
			this->mats[i] = mt->clone();
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