#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& br);
	Brain &operator=(const Brain& brop);
	~Brain();

	std::string exteriorize(int index);
};

#endif //BRAIN_HPP
