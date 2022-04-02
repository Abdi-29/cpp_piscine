#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return  _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return  _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
		<< "account:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposit:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << ";"
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	tmp;

	tmp = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" <<  tmp << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool check;
	int copy;

	if (withdrawal < 0)
		return false;
	copy = _amount;
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << copy << ";"
		<< "withdrawal:";
	if (copy >= withdrawal)
	{
		std::cout
			<< withdrawal << ";"
			<< "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals << ";"
			<< std::endl;
	}
	else
		std::cout << "refused" << std::endl;
	return true;
}

int	Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout
			<< "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "deposit:" << _nbDeposits << ";"
			<< "withdrawals:" << _nbDeposits << ";"
			<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t now;
	
	now = time(0);
	tm *ltm = localtime(&now);
	std::cout
		<< "[" << 1900 + ltm->tm_year
		<< "0" << 1 + ltm->tm_mon
		<< "0" << ltm->tm_mday << "_"
		<< ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0" << ltm->tm_sec << "]";
	else
		std::cout << ltm->tm_sec << "]";
	std::cout << " ";
}

Account::Account(void)
{
	_accountIndex = getNbAccounts();
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created"
		<< std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << initial_deposit << ";"
		<< "created"
		<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout
			<< "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "closed"
			<< std::endl;
//	_accountIndex--;

}