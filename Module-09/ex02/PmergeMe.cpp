/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:16:32 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/27 22:43:29 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>
#include <string.h>
#include <deque>
#include <vector>

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

std::stringstream	PmergeMe::formatMat(char **mat)
{
	std::stringstream	s;
	std::stringstream	temp;
	std::string			str;
	int					value;

	for(int ind = 0; mat[ind] != NULL; ind++)
	{
		str = mat[ind];
		if (onlyDigits(str) == 0 || str.find(' ') != -1)
			throw(Error());
		temp << str;
		s << str;
		temp >> value;
	}
	return (s);
}

int findRepetition(char **mat)
{
	for(int ind1 = 0; mat[ind1] != NULL; ind1++)
		for(int ind2 = ind1 + 1; mat[ind2] != NULL; ind2++)
			if (strcmp(mat[ind1], mat[ind2]) == 0)
				throw(PmergeMe::Error());
}

std::deque<long>	streamToDeque(std::stringstream &s)
{
	std::deque<long>	deque;
	long	value1;
	long	value2;
	long	temp;
	int		ind;

	ind = -1;
	while (!s.eof() && ++ind >= 0)
	{
		s >> value1;
		if (value1 > __INT_MAX__)
			throw(PmergeMe::Error());
		deque[ind] = value1;
		if (s.eof())
			break ;
		s >> value2;
		if (value2 > __INT_MAX__)
			throw(PmergeMe::Error());
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

std::vector<long>	streamToVector(std::stringstream &s)
{
	std::vector<long>	vector;
	long	value1;
	long	value2;
	long	temp;

	for (int ind = 0; !s.eof(); ind++)
	{
		s >> value1;
		if (value1 > __INT_MAX__)
			throw(PmergeMe::Error());
		vector[ind] = value1;
		if (s.eof())
			break ;
		s >> value2;
		if (value2 > __INT_MAX__)
			throw(PmergeMe::Error());
		if (value1 > value2)
		{
			vector[ind] = value2;
			value2 = value1;
		}
		ind++;
		vector[ind] = value2;
	}
	return (vector);
}

void	tmplSwap(std::vector<long> tmpl, int gsize, int indl, int indr)
{
	std::vector<long>	temp;

	int	ind1 = 0;
	int	ind2 = indr - gsize;

	for (int ind = indl - gsize; ind < indl; ind++)
	{
		temp[ind1] = tmpl[ind];
		tmpl[ind] = tmpl[ind2];
		tmpl[ind2] = temp[ind1];
		ind2++;
		ind1++;
	}
}

// template <typename T>
void	FordJohnson(int gsize, std::vector<long> tmpl)
{
	for(int ind = 1; tmpl.size() < gsize * ind * 2 - 1; ind += 2)
		if (tmpl[gsize * ind - 1] < tmpl[gsize * ind * 2 - 1])
			tmplSwap(tmpl, gsize, gsize * ind, gsize * ind * 2);
	if (tmpl.size() > (gsize * 2) * 2)
		FordJohnson((gsize * 2), tmpl);
	std::cout << "\n\n\n\n\n";
	for (std::vector<long>::iterator it; it != tmpl.end() && it + 1 != tmpl.end(); it += 2)
		std::cout << *it << '-' << *(it + 1) << ',';
}

PmergeMe::PmergeMe(char **mat)
{
	std::cout << "PmergeMe argument constructor called" << std::endl;
	std::stringstream s = formatMat(mat);
	findRepetition(mat);

	// startTimer();
	FordJohnson(2, streamToVector(s));
	// endTimer();
	// startTimer();
	// FordJohnson(2, streamToDeque(s));
	// endTimer();
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe default destructor called" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe &ref)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(PmergeMe &ref)
{
	std::cout << "PmergeMe copy assignment operator called" << std::endl;
}
