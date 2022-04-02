#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void) 
{
    std::string	buffer;
    int			valid;
    int		value;
	t_function	command[3] = {
		{"ADD", &PhoneBook::add_function},
		{"SEARCH", &PhoneBook::search_function},
		{"EXIT", &PhoneBook::exit_function}
	};

	this->value = 0;
	value = 1;
	this->_index = 0;
	while (value)
	{
		valid = 0;
		std::cout<<"input a word: ";
		getline(std::cin, buffer);
		if (std::cin.eof())
			break;
		for (int i = 0; i < 3; i++)
		{
			if (buffer.size() == 0)
				break ;
			if (command[i].option == buffer)
			{
				valid = 1;
				//(*this).*
				value = (this->*command[i].function_pointer)();
				if (!value)
					return;
				break ;
			}
		}
		if (valid == 0)
			std::cout << "usage [ADD] or [SEARCH] or [EXIT]" << std::endl;
	}
}

Contact::Contact()
{
}

int PhoneBook::exit_function(void)
{
	return 0;
}

std::string Contact::get_option(std::string str) const
{
	std::string	buffer;

	while (1)
	{
		std::cout << str;
		getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
		if (buffer.length() > 0)
			break ;
		std::cout << "argument can't be empty" << std::endl;
	}
	return buffer;
}

int PhoneBook::add_function(void) 
{
	int			i;

	i = this->_index % 8;
	this->buffer[i][0] = this->contacts[i].get_option("first name: ");
	this->buffer[i][1] = this->contacts[i].get_option("last name: ");
	this->buffer[i][2] = this->contacts[i].get_option("nickname: ");
	this->buffer[i][3] = this->contacts[i].get_option("phone number: ");
	this->buffer[i][4] = this->contacts[i].get_option("darkest secret: ");
	if (this->value == 8)
		this->value = 8;
	else
		this->value++;
	this->_index++;
	return 1;
}

void	PhoneBook::PrintValue(std::string str) const
{
	if (str.length() > 10)
		std::cout << "|" << std::right << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << "|" << std::right << std::setw(10) << str;
	return ;
}

int PhoneBook::search_function(void) 
{
	std::string number;
	int			index;

	std::cout << "|     index| firstname|  lastname|  nickname|" << std::endl;
	if (this->value == 0)
	{
		std::cout << "phonebook is empty" << std::endl;
		return 1;
	}
	for (int i = 0; i < this->value; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i;
		for (int j = 0; j < 3; j++)
		{
			PrintValue(this->buffer[i][j]);
		}
		std::cout << "|" << std::endl;
	}
	std::cout <<"enter an index: ";
	getline(std::cin, number);
	if (std::cin.eof())
		exit(0);
	for (size_t i = 0; i < number.length(); i++)
	{
		if (!isdigit(number[i]))
		{
			std::cout <<"index can be only numbers" << std::endl;
			return 1;
		}
	}
	index = std::stoi(number);
	if (index >= this->value || this->value < 0)
	{
		std::cout <<"index is high or low" << std::endl;
		return 1;
	}
	std::cout << "firs name: " << this->buffer[index][0] << std::endl;
	std::cout << "last name: " << this->buffer[index][1] << std::endl;
	std::cout << "nickname: " << this->buffer[index][2] << std::endl;
	std::cout << "phone number: " << this->buffer[index][3] << std::endl;
	std::cout << "darkest secret: " << this->buffer[index][4] << std::endl;
	return(1);
}

PhoneBook::~PhoneBook()
{

}
Contact::~Contact()
{

}

int	main(int argc, char **argv) {	
	if (argc != 1)
	{
		std::cout << "invalid argument" << std::endl;
		return 1;
	}
	(void)argv;
	PhoneBook instance;
}