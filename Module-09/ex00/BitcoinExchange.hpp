/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:59:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/18 19:45:19 by jlima-so         ###   ########.fr       */
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

class BitcoinExchange
{
private:
	std::map<std::string, float>	datab;
	int						init;
public:
	BitcoinExchange();
	BitcoinExchange(std::string file, char ch);
	BitcoinExchange(BitcoinExchange &ref);
	~BitcoinExchange();
	BitcoinExchange &operator=(BitcoinExchange &ref);

	void	readDataBase(std::string file, char ch);
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