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

	void addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret);
};


#endif //PHONEBOOK_HPP
