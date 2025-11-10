#include <iostream>
#include <unistd.h>
#include <string>

class Contact
{
private:
	std::string	str[5];
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;

	void	put(std::string &in, int i);
	void	put_nbr(long &numb);
public:
	Contact();
	void	add_info();
	void	format(std::string temp);
	void	print_info(int ind);
	void	print_secrets();
};
