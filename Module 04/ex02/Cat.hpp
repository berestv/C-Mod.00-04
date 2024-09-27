#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;

public:
	Cat();
	//Cat(std::string tp);
	Cat(const Cat &copyCat);
	Cat &operator=(const Cat &op);
	~Cat();

	void makeSound() const;
	void exteriorize(int index) const;
};

#endif //CAT_HPP
