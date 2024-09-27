#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	//Cat(std::string tp);
	WrongCat(const WrongCat &copyCat);
	WrongCat &operator=(const WrongCat &op);
	~WrongCat();

	void makeSound() const;
};

#endif //WRONGCAT_HPP
