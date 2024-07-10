#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define BLINK       "\033[5m"
#define ENDBL       "\033[25m"

class PhoneBook
{
private:
	Contact contacts[8];
	int index;
	int conNum;

public:
	PhoneBook();
	~PhoneBook();

	void addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkSecret) {
		if (index > 7)
			index = 0;
		if (conNum < 8)
			conNum++;
		if (conNum == 8)
			clearIndex(index);
		contacts[index].setInfo(firstName, lastName, nickname, phoneNumber, darkSecret);
		index++;
	};

	void clearIndex(int idx) {
		contacts[idx].clearCnt();
	};

	int getIndex(){
		return index;
	};
	int getTrueNo(){
		return conNum;
	}
	std::string getNameInd(int indx){
		return contacts[indx].getName();
	};
	std::string getLstNameInd(int indx){
		return contacts[indx].getLstName();
	};
	std::string getNicknmIndx(int indx){
		return contacts[indx].getNicknm();
	};
	std::string getPhoneIndx(int indx){
		return contacts[indx].getPhone();
	};
	std::string getSecretIndx(int indx){
		return contacts[indx].getSecret();
	};
};


#endif //PHONEBOOK_HPP
