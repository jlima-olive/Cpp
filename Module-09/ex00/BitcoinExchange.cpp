/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:54:01 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/18 20:36:52 by jlima-so         ###   ########.fr       */
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
	
BitcoinExchange::BitcoinExchange(std::string file, char ch)
{
	std::cout << "BitcoinExchange copy operator called" << std::endl;
	readDataBase(file, ch);
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
	
void	BitcoinExchange::readDataBase(std::string file, char ch)
{
	std::string		key;
	std::ifstream	infile(file.c_str());
	int				value;
	std::stringstream	stream;

	if (!infile.is_open())
	{
		std::cout  << "Coudn't open file:" << file.c_str() << std::endl;
		throw (DataBaseError());
	}
	while (getline(infile, key))
	{
		int	pos;

		for (std::string::iterator it = key.begin(); it != key.end(); it++)
			if (*it == ' ')
				key.erase(it);
		pos = key.find(ch);
		if (pos != -1)
		{
			std::cout << "substr:	" << key.substr(pos) << '|' << std::endl;
			stream << key.substr(pos);
			stream >> value;
			std::cout << "value:	" << value << std::endl;
			datab.insert(std::make_pair(key.substr(0, pos), value));
			stream.clear();
		}
		// std::cout << "4" << std::endl;
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