#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	int no = 5;
	const Animal* a[5];

	for (int k = 0; k < no; k++) {
		if (k % 2 == 0)
			a[k] = new Dog();
		else
			a[k] = new Cat();
		a[k]->makeSound();

	}

	return 0;
}