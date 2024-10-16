#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	//Animal(std::string tp);
	WrongAnimal (const WrongAnimal& copyAnm);
	WrongAnimal &operator=(const WrongAnimal& op);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif //WRONGANIMAL_HPP
