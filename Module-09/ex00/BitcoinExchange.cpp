/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:54:01 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/21 03:47:05 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange()
{
	init = 0;
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}
	
BitcoinExchange::BitcoinExchange(BitcoinExchange &obj) :
datab(obj.datab)
{
	std::cout << "BitcoinExchange argument constructor called" << std::endl;
	init = 1;
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
		break;
	case 2:
		return (day <= 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)));
		break;
	case 3:
		return (day <= 31);
		break;
	case 4:
		return (day <= 30);
		break;
	case 5:
		return (day <= 31);
		break;
	case 6:
		return (day <= 30);
		break;
	case 7:
		return (day <= 31);
		break;
	case 8:
		return (day <= 31);
		break;
	case 9:
		return (day <= 30);
		break;
	case 10:
		return (day <= 31);
		break;
	case 11:
		return (day <= 30);
		break;
	case 12:
		return (day <= 31);
		break;
	default:
		return (0);
	}

}

int	BitcoinExchange::validInpout(std::string &key, std::stringstream &stream)
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
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	stream >> year;
	if (stream.get() != '-')
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	if (isdigit(stream.peek()) == 0)
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	stream >> month;
	if (month > 12)
		return (std::cout << "Error: not a valid date" << std::endl, 0);
	if (stream.get() != '-')
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	if (isdigit(stream.peek()) == 0)
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	stream >> day;
	if (valid_day(year, month, day) == 0)
		return (std::cout << "Error: not a valid date" << std::endl, 0);
	stream.clear();
	stream << key.substr(pos + 1);
	if (isdigit(stream.peek()) == 0)
		return (std::cout << "Error: bad input => " << key << std::endl, 0);
	stream >> value;
	if (!stream.eof())
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
		throw (DataBaseError());
	}
	while (getline(infile, key))
	{
		std::stringstream	stream;

		if (key == "date,exchange_rate")
			continue ;
		validInpout(key, stream) == 0;
	}
	for (std::map<std::string, float>::iterator it = datab.begin(); it != datab.end(); it++)
		std::cout << '|' << it->first << '|' << ' ' << '|' << it->second << '|' << std::endl;
		
}
void	BitcoinExchange::outputDataBaseMult(BitcoinExchange &db)
{
	
}
	
const char *BitcoinExchange::ObjectNotInitialized::what() const throw()
{
	return ("Object was not initialized");
}
	
const char *BitcoinExchange::DataBaseError::what() const throw()
{
	return ("There was an error with the Data Base");
}