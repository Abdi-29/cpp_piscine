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
	enum s_option
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
	void	complain(std::string level);
	int		getOption(std::string input);
	Harl(void);
	~Harl();
};

#endif