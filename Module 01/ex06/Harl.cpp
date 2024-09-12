#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[HARL DEBUG]" << std::endl;
	std::cout <<  "I love having extra bacon for my "
				  "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				  "I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[HARL INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, "
				 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[HARL WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started working "
				 "here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[HARL ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*types[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int cmpl = -1;

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			cmpl = i;

	switch (cmpl) {
		case 0:
			(this->*types[0])();
			/* fall through */
		case 1:
			(this->*types[1])();
			/* fall through */
		case 2:
			(this->*types[2])();
			/* fall through */
		case 3:
			(this->*types[3])();
				break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}