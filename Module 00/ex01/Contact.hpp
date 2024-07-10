#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

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
	void clearCnt();

	std::string getName(){ return fstName; };
	std::string getLstName(){ return lstName; };
	std::string getNicknm(){ return nick; };
	std::string getPhone(){ return phone; };
	std::string getSecret(){ return secret; };
};

#endif //CONTACT_HPP
