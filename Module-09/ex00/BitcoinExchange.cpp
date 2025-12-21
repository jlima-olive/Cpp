/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:54:01 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/21 16:17:58 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}
	
BitcoinExchange::BitcoinExchange(BitcoinExchange &obj) :
datab(obj.datab)
{
	std::cout << "BitcoinExchange argument constructor called" << std::endl;
}
	
BitcoinExchange::BitcoinExchange(std::string file)
{
	std::cout << "BitcoinExchange copy operator called" << std::endl;
	builtDataBase(file);
}
	
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange default destructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &ref)
{
	std::cout << "BitcoinExchange copy assignment operator called" << std::endl;
	datab = ref.datab;
	return (*this);
}

int	valid_day(int year, int month, int day)
{
	switch (month)
	{
	case 1:
		return (day <= 31);
	case 2:
		return (day <= 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)));
	case 3:
		return (day <= 31);
	case 4:
		return (day <= 30);
	case 5:
		return (day <= 31);
	case 6:
		return (day <= 30);
	case 7:
		return (day <= 31);
	case 8:
		return (day <= 31);
	case 9:
		return (day <= 30);
	case 10:
		return (day <= 31);
	case 11:
		return (day <= 30);
	case 12:
		return (day <= 31);
	default:
		return (0);
	}

}

void	printErrorMsg(erro_id num, std::string &key)
{
	if (num == INPUT)
		std::cout << "Error: bad input => " << key << std::endl;
	else if (num == DATE)
		std::cout << "Error: not a valid date." << std::endl;
	else if (num == SMALL)
			std::cout << "Error: not a positive number." << std::endl;
	else if (num == BIG)
		std::cout << "Error: too large a number." << std::endl;

}

int	BitcoinExchange::validOutput(std::string &key, std::stringstream &stream)
{
	int		year;
	int		month;
	int		day;
	int		pos;
	float	value;

	stream.clear();
	pos = key.find('|');
	stream << key.substr(0, pos);
	if (isdigit(stream.peek()) == 0)
		return (printErrorMsg(INPUT, key), 0);
	stream >> year;
	if (stream.get() != '-')
		return (printErrorMsg(INPUT, key), 0);
	if (isdigit(stream.peek()) == 0)
		return (printErrorMsg(INPUT, key), 0);
	stream >> month;
	if (month > 12)
		return (printErrorMsg(DATE, key), 0);
	if (stream.get() != '-')
		return (printErrorMsg(INPUT, key), 0);
	if (isdigit(stream.peek()) == 0)
		return (printErrorMsg(INPUT, key), 0);
	stream >> day;
	if (valid_day(year, month, day) == 0)
		return (printErrorMsg(DATE, key), 0);
	stream.clear();
	stream << key.substr(pos + 1);
	while (stream.peek() == ' ')
		stream.get();
	if (isdigit(stream.peek()) == 0)
		return (printErrorMsg(INPUT, key), 0);
	stream >> value;
	if (!stream.eof())
		return (printErrorMsg(INPUT, key), 0);
	if (value > 1000)
		return (printErrorMsg(BIG, key), 0);
	if (value < 0)
		return (printErrorMsg(SMALL, key), 0);
	std::map<std::string, float>::iterator it = datab.lower_bound(key.substr(0, pos));
	if (it->first != key.substr(0, pos) && it == datab.begin())
		return (printErrorMsg(DATE, key), 0);
	if (it->first != key.substr(0, pos) && it != datab.begin())
		it--;
	std::cout << it->first << " => " << value << " => " << it->second * value <<  std::endl;
	return (1);
}

int	BitcoinExchange::validInput(std::string &key, std::stringstream &stream)
{
	int		year;
	int		month;
	int		day;
	int		pos;
	float	value;

	stream.clear();
	pos = key.find(',');
	stream << key.substr(0, pos);
	if (isdigit(stream.peek()) == 0)
		return (0);
	stream >> year;
	if (stream.get() != '-')
		return (0);
	if (isdigit(stream.peek()) == 0)
		return (0);
	stream >> month;
	if (month > 12)
		return (0);
	if (stream.get() != '-')
		return (0);
	if (isdigit(stream.peek()) == 0)
		return (0);
	stream >> day;
	if (valid_day(year, month, day) == 0)
		return (0);
	stream.clear();
	stream << key.substr(pos + 1);
	if (isdigit(stream.peek()) == 0)
		return (0);
	stream >> value;
	if (!stream.eof())
		return (0);
	if (value < 0)
		return (0);
	datab.insert(std::make_pair(key.substr(0, pos), value));
	return (1);
}
	
void	BitcoinExchange::builtDataBase(std::string file)
{
	std::string		key;
	std::ifstream	infile(file.c_str());

	if (!infile.is_open())
	{
		std::cout  << "Coudn't open file:" << file.c_str() << std::endl;
		return ;
	}
	while (getline(infile, key))
	{
		std::stringstream	stream;

		if (key == "date,exchange_rate")
			continue ;
		validInput(key, stream);
	}
		
}
	
void	BitcoinExchange::useDataBase(std::string file)
{
	std::string		key;
	std::ifstream	infile(file.c_str());

	if (!infile.is_open())
	{
		std::cout  << "Coudn't open file:" << file.c_str() << std::endl;
		return ;
	}
	while (getline(infile, key))
	{
		std::stringstream	stream;

		validOutput(key, stream);
	}
		
}
	