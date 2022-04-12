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
	int		getOption(std::string input);

public:
	enum s_option
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
	void	complain(std::string level);
	Harl(void);
	~Harl();
};

#endif