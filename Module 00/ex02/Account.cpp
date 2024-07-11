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

Account::~Account( void ) {
	static int i = 0;

	if (i > 7)
		i = 0;

	_displayTimestamp();

	_accountIndex = i;
	std::cout << "index:" << _accountIndex;

	std::cout << ";amount:" << _amount;

	std::cout << ";closed" << std::endl;

	if (_nbAccounts > 0)
		_nbAccounts--;
	i++;
};

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
	i++;
};

bool	Account::makeWithdrawal( int withdrawal ){
	static int i = 0;

	if (i > 7)
		i = 0;

	_displayTimestamp();

	std::cout << "index:" << i;

	std::cout << ";p_amount:" << _amount;

	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		i++;
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal;

	_amount -= withdrawal;
	std::cout << ";amount:" << _amount;

	_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	i++;
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