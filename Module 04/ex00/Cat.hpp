#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	//Cat(std::string tp);
	Cat(const Cat &copyCat);
	Cat &operator=(const Cat &op);
	~Cat();

	void makeSound() const;
};

#endif //CAT_HPP
