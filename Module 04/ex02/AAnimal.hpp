#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	//AAnimal(std::string tp);
	AAnimal (const AAnimal& copyAnm);
	AAnimal &operator=(const AAnimal& op);
	virtual ~AAnimal();

	virtual void makeSound() const;
	std::string getType() const;
	virtual void exteriorize(int index) const;
};

#endif //AAnimal_HPP
