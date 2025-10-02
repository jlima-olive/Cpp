#include <iostream>
#include <unistd.h>
#include <string>
#include "myphonebook.hpp"

void	Contact::put(std::string &in, int i)
{
	std::string t;
	std::cout << str[i];
	while (t.empty())
	{
		std::getline(std::cin, t, '\n');
		if (std::cin.eof())
			exit (0);
	}
	in = t;
	if (std::cin.eof())
		exit (0);
	if (in.length() > 10 && i < 3)
	{
		in.at(9) = '.';
		in.erase(in.begin() + 10, in.end());
	}
	if (i == 4)
		std::cout << "we got " << phone_number;
}
void	Contact::put_nbr(long &numb)
{
	std::cout << "Hand over the phone number: ";
	while (1)
	{
		if (std::cin >> numb)
			break;
		if (std::cin.eof())
			exit (0);
		std::cin.clear();
		std::cin.ignore(__INT_MAX__, '\n');
		std::cout << "That's not a valid phone number\nTry again: ";
	}
}
Contact::Contact()
{
	str[0] = "\nHand over the first name: ";
	str[1] = "Hand over the last name: ";
	str[2] = "Hand over the nickname: ";
	str[3] = "Hand over the darkest secret: ";
	str[4] = "Hand over the phone number: ";
}
void	Contact::add_info()
{
	put(first_name, 0);
	put(last_name, 1);
	put(nickname, 2);
	put(phone_number, 4);
	put(darkest_secret, 3);
}
void	Contact::format(std::string temp)
{
	for (int i = temp.length(); i < 10; i++)
		std::cout << ' ';
	std::cout << temp << "|";
		
}
void	Contact::print_info(int ind)
{
	if (first_name.length())
	{
		std::cout << "| " << ind << '|';
		format(first_name);
		format(last_name);
		format(nickname);
		// format(darkest_secret);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "| " << ind;
		for (int i = -1; i < 2; i++)
			std::cout << '|' << "          ";
		std::cout << '|' << std::endl;
	}
}
void	Contact::print_secrets()
{
	std::cout << "Their phone number is " << phone_number << std::endl << "And..." << std::endl;
	std::cout << "Their secret is..." << darkest_secret << std::endl << std::endl;
}
