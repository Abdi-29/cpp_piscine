#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::_nbAccounts = 0;
Account::_totalAmount = 0;
Account::_totalNbDeposits = 0;
Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return _nbAccount;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return totalNbWithdrawls;
}

void Account::displayAccountsInfos( void )
{
	return;
}

void	Account::makeDeposit( int deposit )
{
	int	tmp;

	if (deposit < 0)
		return;
	tmp = _account;
	_account += deposit;
	_nbDeposit++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout
			<< "index:" << _accountIndex << ";"
			<< "p_amount:" << tmp << ";"
			<< "deposit:" << deposit << ";";
			<< "amount:" << _amount << ";";
			<< "nb_deposit:" << _nbDeposits << ";";
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool check;
	int copy;

	if (withdrawal < 0)
		return false;
	check = _amount;
	copy = _amount;
	if (_amount)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawl;
		_totalNbWithdrawals++;
	}
	_displayTimestamp();
	std::cout
			<< "index:" << _accountIndex << ";"
			<< "p_amount:" << copy << ";"
			<< "withdrawals:" << _nbWithdrawals << ";";
	if (check)
	{
		std::cout
				<< "amount:" << copy << ";"
				<< "nb_withdrawals:" << _nbDeposits << ";";
				<< std::endl;
	}
	else
		std::cout << "refused" << std::endl;
	return check;
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
			<< "amount:" << _ammount << ";"
			<< "deposit:" << _nbDeposits << ";"
			<< "withdrawals:" << _nbDeposits << ";"
			<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t now;
	
	now = time(0);
	tm *ltm = localtime(&now);
	std::cout << 1900 + ltm->tm_year;
	std::cout << 1 + ltm->tm_mon;
	std::cout << "Day: "<< ltm->tm_mday << "_";
	std::cout << "Time: "<< 5+ltm->tm_hour;
	std::cout << 30+ltm->tm_min;
	std::cout << ltm->tm_sec << std::endl;
}

Account::Account(void)
{
	_accountIndex = getNbAccount();
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount" << _ammount << ";"
		<< "created"
		<< std::endl;
}

Account::Account(int initial_deposit)
{
	
}

Account::~Account()
{

}