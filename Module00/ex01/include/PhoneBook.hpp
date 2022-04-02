#ifndef PhoneBook_HPP
# define PhoneBook_HPP
# include <iostream>

#include "Contact.hpp"

class PhoneBook;

typedef struct s_function 
{
    std::string option;
    int (PhoneBook::*function_pointer)(void);
}               t_function;

class PhoneBook 
{
private:
	Contact	contacts[8];
	int 	_index;

public:
    int     value;
    std::string	buffer[8][5];
	int		search_function(void);
	int		exit_function(void);
	int 	add_function(void);
    void    PrintValue(std::string str) const;
    PhoneBook(void);
    ~PhoneBook();
};

#endif