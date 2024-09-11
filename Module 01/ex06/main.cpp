#include "Harl.hpp"

int main (int argc, char *argv[]){
	Harl harley;

	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
			harley.complain(argv[i]);
		std::cout << std::endl;
		std::cout << "Separate tests:" << std::endl;
		std::cout << std::endl;
	}
	// Testing valid complaints
	harley.complain("DEBUG");
	std::cout << std::endl;
	harley.complain("INFO");
	std::cout << std::endl;
	harley.complain("WARNING");
	std::cout << std::endl;
	harley.complain("ERROR");
	std::cout << std::endl;

	std::cout << std::endl;

	// Testing invalid complaints
	harley.complain("INVALID");
	harley.complain("MORE BACON!");
	harley.complain("123");
	harley.complain("1");
}
