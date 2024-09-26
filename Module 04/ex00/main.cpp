#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* a = new WrongCat();
	std::cout << std::endl;
	std::cout << a->getType() << ": " ;
	a->makeSound();
	std::cout << std::endl;
	wrong->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete a;

	return 0;
}