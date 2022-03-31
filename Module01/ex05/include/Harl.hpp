#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl;


class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	typedef struct s_function
	{
		std::string	info;
		void	(Harl::*function)(void);
	}			t_function;
	void	complain(std::string level);
	Harl(void);
	~Harl();
};

#endif