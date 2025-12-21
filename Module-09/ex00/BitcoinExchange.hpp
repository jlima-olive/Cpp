/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:59:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/21 04:04:39 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <iterator>
# include <sstream>

typedef enum error_enum
{
	DATE,
	BIG,
	SMALL,
	INPUT
} erro_id;

class BitcoinExchange
{
private:
	std::map<std::string, float>	datab;
	int						init;
public:
	BitcoinExchange();
	BitcoinExchange(std::string file);
	BitcoinExchange(BitcoinExchange &ref);
	~BitcoinExchange();
	BitcoinExchange &operator=(BitcoinExchange &ref);

	void	builtDataBase(std::string file);
	int		validInpout(std::string &key, std::stringstream &stream);

	void	outputDataBaseMult(BitcoinExchange &db);
	
	class ObjectNotInitialized : public std::exception
	{
		virtual const char *what() const throw();
	};
	class DataBaseError : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif