#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL";
	std::cout << "-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout <<std::endl;
}
void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more mone";
	std::cout << "You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << "foryears whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

int	Harl::getOption(std::string input)
{
	std::string	command[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (command[i] == input)
			return i;
	}
	return -1;
}

void	Harl::complain(std::string input)
{
	switch (getOption(input))
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
		{
			error();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::Harl(void)
{

}

Harl::~Harl()
{

}