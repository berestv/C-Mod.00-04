#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

/*Cat::Cat(std::string tp) {
	std::cout << "Cat constructor called." << std::endl;
	this->type = tp;
}*/

Cat::Cat(const Cat& copyCat) : Animal(copyCat) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = copyCat.type;
	this->brain = copyCat.brain;
}

Cat &Cat::operator=(const Cat& op) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &op)
	{
		this->type = op.type;
		this->brain = op.brain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}

// Functions

void Cat::makeSound() const {
	if (this->type == "Cat")
		std::cout << "Meow meow. Pet me!" << std::endl;
}

void Cat::exteriorize(int index) const {
	std::cout << this->brain->exteriorize(index) << std::endl;
}