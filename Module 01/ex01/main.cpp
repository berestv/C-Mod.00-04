#include "Zombie.hpp"

int main(){
	int i = 10;

	Zombie *myHorde = zombieHorde(i, "Horder");

	for (int j = 0; j < i; ++j) {
		myHorde[j].announce();
	}

	delete[] myHorde;

	return 0;
}
