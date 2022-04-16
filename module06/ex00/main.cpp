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

#include <iostream>

typedef enum s_type
{
	FLOAT,
	INT,
	CHAR,
	DOUBLE
}			t_type;

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

bool isValidInput(std::string str)
{
	size_t len;
	int 	letterCount;
	int 	dotCount;

	if (str.empty())
		return false;
	str = skipSpaces(str);
	len = str.length();
	for (size_t i = 0; i < len; i++)
	{
		if (isalpha(str[i]))
		{
			if (str[i] == 'f')
				letterCount++;
			else
				return false;
		}
		if (str[i] == '.')
			dotCount++;
		if (letterCount > 1 || dotCount > 1)
			return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "the argument has to be 2" << std::endl;
		return 1;
	}
	if (!isValidInput(argv[1]))
	{
		std::cout << "invalid input" << std::endl;
		return 1;
	}
}