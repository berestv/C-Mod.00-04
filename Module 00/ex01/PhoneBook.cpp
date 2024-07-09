#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	index = 0;
	conNum = 0;
};

PhoneBook::~PhoneBook(){

};

PhoneBook myPhoneBook;

void add()
{
	std::string fName;
	std::string lName;
	std::string nick;
	std::string phn;
	std::string dsec;

	system("clear");
	std::cout << "First Name    : ";
	std::cin >> fName;
	std::cout << "Last Name     : ";
	std::cin >> lName;
	std::cout << "Nickname      : ";
	std::cin >> nick;
	std::cout << "Phone Number  : ";
	std::cin >> phn;
	std::cout << "Darkest Secret: ";
	std::cin >> dsec;

	if (fName.empty())
		fName = "Unknown";
	if (lName.empty())
		fName = "Unknown";
	if (nick.empty())
		nick = "N/A";
	if (phn.empty())
		nick = "N/A";
	if (dsec.empty())
		nick = "No secrets to reveal";

	myPhoneBook.addContact(fName, lName, nick, phn, dsec);
}

void trimOutput(std::string setVar, int n, char c)
{
	if ((int)setVar.size() > n)
		setVar = setVar.substr(0, n - 1) + ".";
	if (c == 'L')
	{
		for (int j = setVar.size(); j < n; ++j) { std::cout << " "; }
		std::cout << setVar << "|";
	}
	if (c == 'D')
	{
		std::cout << setVar;
		for (int j = setVar.size(); j < n; ++j) { std::cout << " "; }
		std::cout << "|";
	}
}

void contactDetails(int i)
{
	std::string setVar = myPhoneBook.getNameInd(i);
	int len = setVar.size();

	system("clear");
	std::cout << "┌";
	for (int j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "┐" << std::endl;
	std::cout << "| Detailed info about " << setVar << " |";
	std::cout << "\n├";
	for (int j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "┘" << std::endl;
	std::cout << "|Index No. : " << i << std::endl;
	setVar = myPhoneBook.getNameInd(i);
	std::cout << "|First Name: " << setVar << std::endl;

	setVar = myPhoneBook.getLstNameInd(i);
	std::cout << "|Last Name : " << setVar << std::endl;

	setVar = myPhoneBook.getNicknmIndx(i);
	std::cout << "|Nickname  : " << setVar << std::endl;

	setVar = myPhoneBook.getSecretIndx(i);
	std::cout << "|Darkest Secret:\n|" << setVar << std::endl;
	std::cout << "└";
	for (int j = 0; j < 22 + len; ++j) { std::cout << "~"; }
	std::cout << "\n\nPress Enter to continue";
	std::cin.ignore();
}

void search()
{
	int num = 0;
	std::string setVar;

	while (num != -1)
	{
		system("clear");
		std::cout << "┌-------------------------------------------┐" << std::endl;
		std::cout << "|              My Contacts List             |" << std::endl;
		std::cout << "|            ———————————————————            |" << std::endl;
		std::cout << "├~~~~~~~~~~┬~~~~~~~~~~┬~~~~~~~~~~┬~~~~~~~~~~┤" << std::endl;
		std::cout << "|Index No. | Name     | Surname  | Nickname |" << std::endl;
		std::cout << "├~~~~~~~~~~┼~~~~~~~~~~┼~~~~~~~~~~┼~~~~~~~~~~┤" << std::endl;

		for (int i = 0; i < myPhoneBook.getTrueNo(); ++i) {

			std::cout << "╰┈➤ " << i << "      |";

			setVar = myPhoneBook.getNameInd(i);
			trimOutput(setVar, 10, 'L');

			setVar = myPhoneBook.getLstNameInd(i);
			trimOutput(setVar, 10, 'L');

			setVar = myPhoneBook.getNicknmIndx(i);
			trimOutput(setVar, 10, 'L');
			std::cout << "\n├----------┼----------┼----------┼----------┤" << std::endl;
		}

		if (myPhoneBook.getTrueNo() == 1)
			std::cout << "|    ☎     |▶    " << myPhoneBook.getTrueNo() << "  Contact     ◀|     ☎    |" << std::endl;
		else
			std::cout << "|    ☎     |▶    " << myPhoneBook.getTrueNo() << "  Contacts    ◀|     ☎    |" << std::endl;
		std::cout << "╰——————————┴——————————┴——————————┴——————————╯" << std::endl;
		std::cout << "\nInput anything that isn't a number to return." << std::endl;
		std::cout << "For contact details, write the index: ";
		std::cin >> num;

		if (std::cin.fail())
			num = -1;
		else
		{
			while (num < 0 || num > 8 || num > myPhoneBook.getTrueNo() - 1)
			{
				if (num > 8)
					std::cerr << "What, do you think I'm some kind of supercomputer?\nThis is the 80s, I have VERY limited memory." << std::endl;
				if (num < 0 || num > myPhoneBook.getTrueNo() - 1)
					std::cerr << "Error: Indexes range from 0 to " << myPhoneBook.getTrueNo() - 1;
				std::cin.clear();
				std::cout << "\nInput anything that isn't a number to return." << std::endl;
				std::cout << "For contact details, write the index: ";
				std::cin >> num;
			}
			contactDetails(num);
		}
		std::cin.ignore();
		std::cin.clear();
	}
}



int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	std::string comm;
	std::string var;
	int c = 0;
	int wrong = 0;

	while (c != 3)
	{
		c = 0;
		system("clear");
		std::cout << "┌---------------------------------┐" << std::endl;
		std::cout << "| Welcome to My Awesome PhoneBook |" << std::endl;
		std::cout << "|           ―――――――――――           |" << std::endl;
		std::cout << "├---------------------------------┤" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "| Available actions:              |" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "| • ADD                 ➕        |" << std::endl;
		std::cout << "| • SEARCH              \xF0\x9F\x94\x8E        |" << std::endl;
		std::cout << "| • EXIT                ⛔        |" << std::endl;
		std::cout << "|                                 |" << std::endl;
		std::cout << "└---------------------------------┘" << std::endl;
		if (wrong == 1)
		{
			std::cerr << "Wrong input! Try again." << std::endl;
			wrong = 0;
		}
		std::cout << " > ";
		std::cin >> comm;

		wrong = 0;
		if (std::cin.eof())
			break ;
		if (!comm.empty())
		{
			if (comm == "ADD")
				c = 1;
			else if (comm == "SEARCH")
				c = 2;
			else if (comm == "EXIT")
				c = 3;

			switch (c) {
				case 1:
					add();
					break;
				case 2:
					search();
					std::cin.ignore();
					std::cin.clear();
					break;
				case 3:
					break;
				default:
					wrong = 1;
					break;
			}
			std::cin.ignore();
			std::cin.clear();
		}
		comm = "";
		std::cin.clear();
	}
	std::cout << "\nProgram will exit." << std::endl;
	return (0);
}
