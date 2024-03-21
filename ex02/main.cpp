#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0;0m"

#include <iostream>

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>::iterator it;
	MutantStack<int>::iterator ite;

	std::cout << YELLOW << "\nWe are going to create a new MutantStack"
	<< RESET << std::endl;
	MutantStack<int> mstack;

	mstack.push(17);
	mstack.push(23);
	mstack.push(98);
	mstack.push(65);
	mstack.push(73);
	mstack.push(0);
	std::cout << "The size of the MutantStack is: " << mstack.size() << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;

	std::cout << YELLOW << "\nCopying a new MutantStack"
	<< RESET << std::endl;
	MutantStack<int>	copy(mstack);
	it = copy.begin();
	ite = copy.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;
	return (0);
}