#include "Contact.hpp"

Contact::Contact() {

};

Contact::~Contact() {

};

void Contact::setInfo( std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret ){
	fstName = firstName;
	lstName = lastName;
	nick = nickname;
	phone = phoneNumber;
	secret = darkSecret;
};
