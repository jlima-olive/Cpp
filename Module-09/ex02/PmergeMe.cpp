/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:16:32 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/28 00:20:40 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>
#include <string.h>

const char *PmergeMe::Error::what() const throw()
{
	return ("Error");
}

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe default constructor called" << std::endl;
}

int	onlyDigits(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
		if(isdigit(*it) == 0)
			return (0);
	return (1);
}

// std::stringstream	PmergeMe::formatMat(char **mat)
// {
// 	std::stringstream	s;
// 	std::stringstream	temp;
// 	std::string			str;
// 	int					value;

// 	for(int ind = 0; mat[ind] != NULL; ind++)
// 	{
// 		str = mat[ind];
// 		if (onlyDigits(str) == 0 || str.find(' ') != str.npos)
// 			throw(Error());
// 		temp << str;
// 		s << str;
// 		temp >> value;
// 	}
// 	return (s);
// }

void findRepetition(char **mat)
{
	for(int ind1 = 0; mat[ind1] != NULL; ind1++)
		for(int ind2 = ind1 + 1; mat[ind2] != NULL; ind2++)
			if (strcmp(mat[ind1], mat[ind2]) == 0)
			{
				std::cout << "error 1" << std::endl;
				throw(PmergeMe::Error());
			}
}

std::deque<long>	streamToDeque(std::stringstream &s)
{
	std::deque<long>	deque;
	long	value1;
	long	value2;
	int		ind;

	ind = -1;
	while (!s.eof() && ++ind >= 0)
	{
		s >> value1;
		if (value1 > __INT_MAX__)
		{
				std::cout << "error 2" << std::endl;

			throw(PmergeMe::Error());
		}
		deque[ind] = value1;
		if (s.eof())
			break ;
		s >> value2;
		if (value2 > __INT_MAX__)
		{
				std::cout << "error 2" << std::endl;
			
			throw(PmergeMe::Error());
		}
		if (value1 > value2)
		{
			deque[ind] = value2;
			value2 = value1;
		}
		ind++;
		deque[ind] = value2;
	}
	return (deque);
}

template <typename T>
T	streamToTemplate(std::stringstream &s)
{
	T		tmpl;
	long	value1;
	long	value2;

	for (int ind = 0; !s.eof(); ind++)
	{
		s >> value1;
		if (value1 > __INT_MAX__)
		{
			std::cout << " error 4" << std::endl;
			throw(PmergeMe::Error());
		}
		tmpl.push_back(value1);
		if (s.eof())
			break ;
		s >> value2;
		if (value2 > __INT_MAX__)
		{
			std::cout << "error 5" << std::endl;
			throw(PmergeMe::Error());
		}
		if (value1 > value2)
		{
			tmpl.at(ind) = value2;
			value2 = value1;
		}
		ind++;
		tmpl.push_back(value2);
	}
	for(typename T::iterator it = tmpl.begin(); it != tmpl.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "were done";
	return (tmpl);
}

void	tmplSwap(std::vector<long> &tmpl, int gsize, int indl, int indr)
{
	long	temp;;

	int	ind2 = indr - gsize;
	for (int ind1 = indl - gsize; ind1 < indl; ind1++)
	{
		// std::cout << std::endl << "swaping " << ind1 << " with " << ind2 << std::endl;
		// std::cout << std::endl << "swaping " << tmpl[ind1] << " with " << tmpl[ind2] << std::endl;
		temp = tmpl[ind1];
		tmpl[ind1] = tmpl[ind2];
		tmpl[ind2] = temp;
		ind2++;
	}
}

// template <typename T>
void	FordJohnson(unsigned long gsize, std::vector<long> tmpl)
{
	std::cout << std::endl << "size is " << gsize << std::endl;

	if (gsize == 2)
	{
		for (std::vector<long>::iterator it = tmpl.begin(); it != tmpl.end() && it + 1 != tmpl.end(); it += 2)
			std::cout << *it << '-' << *(it + 1) << ',';
	}
	for(int ind = 1; tmpl.size() > gsize * (ind + 1) - 1; ind += 2)
		if (tmpl[gsize * ind - 1] > tmpl[gsize * (ind + 1) - 1])
		{
			// std::cout << "looking at [" << gsize * ind - 1 << "] and [" << gsize * (ind + 1) - 1 << ']' <<  std::endl;
			// std::cout << "looking at " << tmpl[gsize * ind - 1] << " and " << tmpl[gsize * (ind + 1) - 1] << std::endl;
			tmplSwap(tmpl, gsize, gsize * ind, gsize * (ind + 1));
		}
	// std::cout << std::endl << "size is " << gsize << std::endl;
	std::cout << std::endl;
	for (std::vector<long>::iterator it = tmpl.begin(); it != tmpl.end() && it + 1 != tmpl.end(); it += 2)
		std::cout << *it << '-' << *(it + 1) << ',';
	std::cout << std::endl;
	if (tmpl.size() >= (gsize * 2) * 2)
		FordJohnson((gsize * 2), tmpl);
	// std::cout << "\n\n\n\n\n";
	// for (std::vector<long>::iterator it; it != tmpl.end() && it + 1 != tmpl.end(); it += 2)
		// std::cout << *it << '-' << *(it + 1) << ',';
}

PmergeMe::PmergeMe(char **mat)
{
	std::cout << "PmergeMe argument constructor called" << std::endl;
	std::stringstream	s;

	findRepetition(mat);
	{
		std::string			str;
		for(int ind = 0; mat[ind] != NULL; ind++)
		{
			str = mat[ind];
			if (onlyDigits(str) == 0 || str.find(' ') != str.npos || str.size() > 10)
			{
				std::cout << "error 6" << std::endl;
				throw(Error());
			}
			s << " " << str;
		}
		std::cout << "here2 " << std::endl;
	}
	// startTimer();
	FordJohnson(2, streamToTemplate<std::vector<long> >(s));
	// endTimer();

	// startTimer();
	// FordJohnson(2, streamToTemplate<std::Deque<long>>(s));
	// endTimer();
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe default destructor called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe &ref)
{
	(void)ref;
	std::cout << "PmergeMe copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(PmergeMe &ref)
{
	std::cout << "PmergeMe copy assignment operator called" << std::endl;
	return (ref);
}
