#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	static int i = 0;

	if (i > 7)
		i = 0;

	_displayTimestamp();

	_accountIndex = i;
	std::cout << "index:" << _accountIndex;

	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << ";amount:" << _amount;

	_nbAccounts++;
	std::cout << ";created" << std::endl;
	i++;
};

Account::~Account( void ) { };

int	Account::getNbAccounts( void ){
	return _nbAccounts;
};

int	Account::getTotalAmount( void ){
	return _totalAmount;
};

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
};

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
};

void	Account::displayAccountsInfos( void ){

	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
};

void	Account::makeDeposit( int deposit ){
	static int i = 0;

	if (i > 7)
		i = 0;

	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();

	std::cout << "index:" << i;

	std::cout << ";p_amount:" << _amount;
	_amount += deposit;

	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;

	_nbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	i++;
};

bool	Account::makeWithdrawal( int withdrawal ){
	static int i = 0;

	if (i > 7)
		i = 0;

	if (withdrawal > _amount)
		return false;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
};
int		Account::checkAmount( void ) const{
	return _amount;
};
void	Account::displayStatus( void ) const{
	static int i = 0;

	if (i > 7)
		i = 0;

	_displayTimestamp();

	std::cout << "index:" << i;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;

	i++;
};

void	Account::_displayTimestamp( void ){
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year << std::setw(2) << std::setfill('0') <<  1 + ltm->tm_mon << std::setw(2) << std::setfill('0') <<  ltm->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') <<  ltm->tm_hour << std::setw(2) << std::setfill('0') <<  ltm->tm_min << std::setw(2) << std::setfill('0') <<  ltm->tm_sec << "] ";
};