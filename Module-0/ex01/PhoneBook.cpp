#include <iostream>
#include <unistd.h>
#include <string>
#include "myphonebook.hpp"

PhoneBook::PhoneBook()
{
	calls = 0;
}
void	PhoneBook::add()
{
	ctt[calls % 8].add_info();
	calls++;
}
void PhoneBook::search()
{
	int	numb;
	for(int ind = 0; ind < 8; ind++)
		ctt[ind].print_info(ind + 1);
	std::cout << "What nbr entry do you want to see?: ";
	while (1)
	{
		if (std::cin >> numb && numb > 0 && numb < 9)
			break;
		if (std::cin.eof())
			exit (0);
		std::cin.clear();
		std::cin.ignore(__INT_MAX__, '\n');
		std::cout << "That's not a valid nbr entry\nTry again: ";
	}
	ctt[numb - 1].print_secrets();
}

int main(void)
{
	PhoneBook	phone;
	std::string	str;

	while (1)
	{
		std::cin.clear();
		std::cout << "OPTIONS: \n";
		std::cout << "ADD, SEARCH, EXIT\n";
		std::cin >> str;
		if (std::cin.eof())
			exit (0);
		if (str.compare("ADD") == 0)
			phone.add();
		else if (str.compare("SEARCH") == 0)
			phone.search();
		else if (str.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Thats... not one of the options my man\n";
	}
	return (0);
}
