#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	std::cout << "---------- Expected output ----------" << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "My tests:" << std::endl << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "---------- Overfilling ----------" << std::endl;
	for (int i = 0; i < 5; ++i) {
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}

	std::cout << std::endl;
	std::cout << "---------- Unequipping ----------" << std::endl;
	std::cout << std::endl;
	me->unequip(0);
	std::cout << std::endl;
	me->unequip(1);
	std::cout << std::endl;
	me->unequip(2);
	std::cout << std::endl;
	me->unequip(3);
	std::cout << std::endl;
	me->unequip(4);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "---------- Overfilling ----------" << std::endl;
	for (int i = 0; i < 5; ++i) {
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}

	std::cout << std::endl;
	std::cout << "---------- Using ----------" << std::endl;
	for (int i = 0; i < 4; i++) {
		me->use(i, *bob);
	}
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}