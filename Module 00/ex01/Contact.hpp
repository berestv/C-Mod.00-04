#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private:
	std::string fstName;
	std::string lstName;
	std::string nick;
	std::string phone;
	std::string secret;

public:
	Contact();
	~Contact();

	void setInfo( std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret );
};

#endif //CONTACT_HPP
