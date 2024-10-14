#include "Harl.hpp"

int main (int argc, char *argv[]){
	Harl harley;

	if (argc == 2)
			harley.complain(argv[1]);
	else
		std::cout << "Wrong number of arguments!" << std::endl;
}
