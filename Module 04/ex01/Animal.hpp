#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	//Animal(std::string tp);
	Animal (const Animal& copyAnm);
	Animal &operator=(const Animal& op);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif //ANIMAL_HPP
