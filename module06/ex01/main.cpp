/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abba <abba@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/18 15:01:59 by abba          #+#    #+#                 */
/*   Updated: 2022/04/18 15:01:59 by abba          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct Data
{
	std::string test;
}				Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data		ptr;
	uintptr_t	serie;

	ptr.test = "testing";
	serie = serialize(&ptr);
	std::cout << serie << std::endl;
	std::cout << ptr.test << std::endl;
	Data *des = deserialize(serie);
	std::cout << des->test << std::endl;
}