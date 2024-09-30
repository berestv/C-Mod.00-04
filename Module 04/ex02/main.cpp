#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	int no = 8;
	const AAnimal* a[no];

	for (int k = 0; k < no; k++) {
		if (k % 2 == 0)
			a[k] = new Dog();
		else
			a[k] = new Cat();
		a[k]->makeSound();
		a[k]->exteriorize(k);
		std::cout << std::endl;
	}

	for (int k = 0; k < no; ++k)
	{
		delete a[k];
		std::cout << std::endl;
	}

	return 0;
}