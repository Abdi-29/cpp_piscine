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

#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "p: C" << std::endl;
}

void identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "p: A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "p: B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "p: C" << std::endl;
}

Base	*generate(void)
{
	int generate;

	srand(time(NULL));
	generate = rand() % 3;
	std::cout << generate << std::endl;
	switch (generate)
	{
		case 0:
			return dynamic_cast<Base*>(new (A));
		case 1:
			return dynamic_cast<Base*>(new (B));
		case 2:
			return dynamic_cast<Base*>(new (C));
	}
	return NULL;
}

int	main(void)
{
	Base	*test;

	test = generate();
	if (!test)
		return 1;
	identify(test);
	identify(*test);
	delete test;
}