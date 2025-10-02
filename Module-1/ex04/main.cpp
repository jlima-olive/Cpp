#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

int	read_file(std::string str, std::string &content)
{
	std::string	buffer;
	int			counter;

	std::ifstream	infile(str.c_str());
	if (!infile.is_open())
	{
		std::cout  << "Coudn't open rfile:" << str.c_str() << std::endl;
		return (errno);
	}
	counter = 0;
	while (getline(infile, buffer))
	{
		if (counter++)
			content.append("\n");
		content.append(buffer);
	}
	return (0);
}

int	write_file(std::string str, std::string &content)
{
	std::ofstream	outfile(str.c_str());
	if (!outfile.is_open())
	{
		std::cout  << "Couldn't open wfile: " << str.c_str() << std::endl;
		return (errno);
	}
	outfile << content;
	return (0);
}

void	replace_all_str(std::string &content, std::string str1, const char *str2)
{
	int	loc;
	int	len;

	len = str1.length();
	loc = content.find(str1);
	while (loc > -1)
	{
		content.erase(loc, len);
		content.insert(loc, str2);
		loc = content.find(str1);
	}
}

int	main(int ac, char **av)
{
	std::string		str;
	std::string		content;

	if (ac != 4)
	{
		std::cout  << "Wrong number of arguments" << std::endl;
		return (0);
	}
	str = *(av + 1);
	if (read_file(str, content))
		return (errno);
	str.append(".replace");
	replace_all_str(content, *(av + 2), *(av + 3));
	if (write_file(str, content))
		return (errno);
}
