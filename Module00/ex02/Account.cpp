#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::getNbAccounts( void )
{
	return;
}

int Account::getTotalAmount( void )
{
	return;
}

int Account::getNbDeposits( void )
{
	return;
}

int Account::getNbWithdrawals( void )
{
	return;
}

void Account::displayAccountsInfos( void )
{
	return;
}

void	Account::makeDeposit( int deposit )
{
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	return true;
}

int	Account::checkAmount( void ) const
{
	return 1;
}

void	Account::displayStatus( void ) const
{
	return;
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

Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}