#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL";
	std::cout << "-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout <<std::endl;
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more mone";
	std::cout << "You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << "foryears whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string input)
{
	t_function	command[4] = 
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (command[i].info == input)
			return (this->*command[i].function)();
	}
	std::cout << "invalid input" << std::endl;
}

Harl::Harl(void)
{

}

Harl::~Harl()
{

}