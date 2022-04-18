/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/15 16:22:46 by abba          #+#    #+#                 */
/*   Updated: 2022/04/15 16:22:46 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/Scalar.hpp"

std::string skipSpaces(std::string str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (isspace(str[i]))
			i++;
		else
			break;
	}
	return &str[i];
}

bool isLiteral(std::string str)
{
	if (str == "nan" || str == "inf")
		return true;
	else if (str == "nanf" || str == "naff")
		return true;
	return false;
}

bool Scalar::isValidInput(std::string str)
{
	size_t len;
	int 	letterCount;
	int 	dotCount;
	size_t	start;

	letterCount = 0;
	dotCount = 0;
	start = 0;
	str = skipSpaces(str);
	if (str[0] == '+' || str[0] == '-')
		start++;
	if (str.empty())
		return false;
	if (isLiteral(&str[start]))
	{
		this->input = str;
		this->type = 1;
		return true;
	}
	len = str.length();
	for (size_t i = start; i < len; i++)
	{
		if (isalpha(str[i]))
		{
			if (str[i] == 'f')
				letterCount++;
			else
				return false;
		}
		else if (str[i] == '.')
			dotCount++;
		else if (!isdigit(str[i]))
			return false;
		if (letterCount > 1 || dotCount > 1)
			return false;
	}
	this->input = str;
	this->type = 0;
	return true;
}

void printLiteral(std::string str)
{
	int index;
	std::string copy;

	index = 0;
	copy = str;
	if (str[0] == '+' || str[0] == '-')
		index++;
	int	len = str.length() - index;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << (len != 4 ? copy.append("f"): str) << std::endl;
	std::cout << "double: " << (len != 3 ? str.erase(str.size() - 1): str) << std::endl;
}

int getPrecision(const std::string str)
{
	int len;

	len = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			for (size_t j = i + 1; j < str.length(); j++)
				len++;
			break;
		}
	}
	if (len == 0)
		len++;
	return len;
}

void numberLiteral(std::string str)
{
	char	charLiteral;
	int		intLiteral;
	double 	doubleLiteral;
	int 	precision;

	precision = getPrecision(str);
	doubleLiteral = std::strtof(str.c_str(), NULL);
	intLiteral = (int)doubleLiteral;
	charLiteral = intLiteral;
	if (isprint(intLiteral))
		std::cout << "char: " << charLiteral;
	else
		std::cout << "char: Non displayable";
	std::cout << std::endl;
	std::cout << "int: " << intLiteral << std::endl;
	std::cout
		<< "float: " << std::fixed
		<< std::setprecision(precision)
		<< doubleLiteral
		<< "f" << std::endl;
	std::cout
		<< "double: " << std::fixed
		<< std::setprecision(precision)
		<< doubleLiteral
		<< std::endl;
}

void convert(std::string str, int type)
{
	long num;

	if (str.length() > 9)
	{
		num = std::atol(str.c_str());
		type = 1;
		if (num > INT_MAX)
			str = "+inf";
		else if (num < INT_MIN)
			str = "-inf";
		else
			type = 0;
	}
	if (type == 1)
	{
		printLiteral(str);
		return;
	}
	numberLiteral(str);
}

int main(int argc, char **argv)
{
	Scalar	a;
	if (argc != 2)
	{
		std::cout << "the argument has to be 2" << std::endl;
		return 1;
	}
	if (!a.isValidInput(argv[1]))
	{
		std::cout << "invalid input" << std::endl;
		return 1;
	}
	std::cout << "string: " << a.input << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	convert(a.input, a.type);
	return 0;
}