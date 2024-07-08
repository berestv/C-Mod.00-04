#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int index;

public:
	PhoneBook();
	~PhoneBook();

	void addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret) {
		if (index > 8)
			index = 0;
		contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkSecret);
		index++;
	};
};


#endif //PHONEBOOK_HPP
