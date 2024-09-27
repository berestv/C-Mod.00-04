#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
	// These ideas are courtesy of r/DumbIdeas
	this->ideas[0] = "Would it be possible to build a new titanic and add wings to turn it into a plane?";
	this->ideas[1] = "Ice flavored water. That's a great idea!";
	this->ideas[2] = "A car radio that only works when you go through a tunnel.";
	this->ideas[3] = "Instant powdered water: just pour the packet into a glass, add water and stir.";
	this->ideas[4] = "Straight bananas. That's it.";
	this->ideas[5] = "Headphones that make outside noise 20 times louder.";
	this->ideas[6] = "Give an AK-74 to a monkey, what's the worst that can happen?";
	this->ideas[7] = "A wristwatch that changes time zone everytime you use it.";

	for (int i = 8; i <= 99; i++) {
		this->ideas[i] = "Still thinking...";
	}
}

Brain::Brain(const Brain &br) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = br;
}

Brain &Brain::operator=(const Brain &brop) {
	std::cout << "Brain default constructor called." << std::endl;
	if (this != &brop)
		*this = brop;
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}


// Functions

std::string Brain::exteriorize(int index) {
	// *sigh ... this is probably a bad idea*
	return this->ideas[index];
}