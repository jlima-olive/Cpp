/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:16:32 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/31 00:47:08 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>
#include <string.h>

int	jacobsthal(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

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

std::vector <long>	streamToTemplate(std::stringstream &s)
{
	std::vector <long>		tmpl;
	long	value1;
	long	value2;

	for (int ind = 0; !s.eof(); ind++)
	{
		s >> value1;
		if (value1 > __INT_MAX__)
			throw(PmergeMe::Error());
		tmpl.push_back(value1);
		if (s.eof())
			break ;
		s >> value2;
		if (value2 > __INT_MAX__)
			throw(PmergeMe::Error());
		ind++;
		tmpl.push_back(value2);
	}
	return (tmpl);
}

void	tmplSwap(std::vector<long> &tmpl, int gsize, int indl, int indr)
{
	long	temp;

	int	ind2 = indr - gsize;
	for (int ind1 = indl - gsize; ind1 < indl; ind1++)
	{
		temp = tmpl[ind1];
		tmpl[ind1] = tmpl[ind2];
		tmpl[ind2] = temp;
		ind2++;
	}
}

void addToTmpl(std::vector<long> &new_tmpl, std::vector<long> &tmpl, int gsize, int ind)
{
	for (int i = ind - gsize; i < ind; i++)
		new_tmpl.push_back(tmpl[i]);
}

void	separateElements(long unsigned gsize, std::vector<long> &tmpl, std::vector<long> &upper, std::vector<long> &lower)
{
	for (int ind = 1; tmpl.size() > gsize * (ind + 1) - 1; ind += 2)
	{
		addToTmpl(lower, tmpl, gsize, gsize * ind);
		addToTmpl(upper, tmpl, gsize, gsize * (ind + 1));
		if (tmpl.size() <= gsize * (ind + 3) - 1 && tmpl.size() > gsize * (ind + 2) - 1)
			addToTmpl(lower, tmpl, gsize, gsize * (ind + 2));
	}
}

void	insertAt(std::vector<long> &upper, int uind, std::vector<long> &lower, int lind, int gsize)
{
	std::vector<long>::iterator uit = upper.begin();

	for (int ind = 0; ind < gsize; ind++)
		upper.insert((uit + uind + ind), lower[lind + ind]);
}

int	tmplfunc(std::vector<long> &tmpl, int gsize, int ind)
{
	return (tmpl[((ind + 1) * gsize) - 1]);
}

void	binary/* Insert */(std::vector<long> &upper, int upsize, std::vector<long> &lower, int gsize, int ind)
{
	int	resize = (upsize - 1) / gsize;
	int	pos;

	pos = resize / 2;
	resize = resize / 2;
	while (resize >= 0)
	{
		if (((pos + 1) * gsize) - 1 > upsize)
			pos = upsize / gsize;
		if (tmplfunc(upper, gsize, pos) > tmplfunc(lower, gsize, ind))
		{
			if (pos <= 0)
			{
				pos = 0;
				break;
			}
			pos -= resize;
			if (pos < 0)
				pos = 0;
		}
		else
		{
			if (pos >= upsize / gsize - 1)
			{
				pos = upsize / gsize - 1;
				break;
			}
			pos += resize + (resize == 0);
			if (pos > upsize / gsize - 1)
				pos = upsize / gsize - 1;
		}
		if (resize == 0)
			break ;
		if (resize % 2 && resize != 1)
			resize++;
		resize /= 2;
	}
	if (pos == 0)
		insertAt(upper, 0, lower, ind * gsize, gsize);
	else if (upsize >= pos * gsize)
		insertAt(upper, pos * gsize, lower, ind * gsize, gsize);
	else
		insertAt(upper, upsize, lower, ind * gsize, gsize);
}

int	elev(int nb, int elev)
{
	int	number = nb;

	while (--elev > 0)
		number *= nb;
	return (number);
}

void	binaryInsert(std::vector<long> &upper, int pos, int upsize, std::vector<long> &lower, int gsize, int ind, int resize)
{
	if (pos < 0)
		pos = 0;
	if (pos > upsize)
		pos = upsize;
	if (resize == 0)
		return (insertAt(upper, pos * gsize, lower, ind * gsize, gsize));
	if (tmplfunc(lower, gsize, ind) > tmplfunc(upper, gsize, pos))
	{
		if (pos == upsize)
			return insertAt(upper, (pos + 1) * gsize, lower, ind * gsize, gsize);
		return binaryInsert(upper, pos + resize / 2 + (resize / 2 == 0), upsize, lower, gsize, ind, resize / 2);
	}
	if (tmplfunc(lower, gsize, ind) < tmplfunc(upper, gsize, pos))
	{
		if (pos == 0)
			return insertAt(upper, 0, lower, ind * gsize, gsize);
		if (resize == 1)
			return insertAt(upper, pos * gsize, lower, ind * gsize, gsize);
		return binaryInsert(upper, pos - resize / 2, upsize, lower, gsize, ind, resize / 2);
	}
}

int	find(std::vector<long> &upper, int ind, int to_find)
{
	while (upper[ind] != to_find)
		ind++;
	return (ind);
}

void organizeGroups(long unsigned gsize, std::vector<long> &tmpl)
{
	std::vector<long>	upper;
	std::vector<long>	lower;

	upper.reserve(tmpl.size());
	separateElements(gsize, tmpl, upper, lower);
	std::vector<long>	copy = upper;
	insertAt(upper, 0, lower, 0, gsize);
	int	jind = 3;
	int	oldind;
	int	pos;
	int	flag = 0;
	while (1)
	{
		oldind = jacobsthal(jind - 1);
		pos = jacobsthal(jind) - 1;
		while (lower.size() <= ((pos) * gsize))
		{
			flag = 1;
			pos--;
		}
		for (int ind = pos; ind >= oldind; ind--)
		{
			if (copy.size() > ((ind + 1) * gsize) - 1)
			{
				int nb = find(upper, oldind, tmplfunc(copy, gsize, ind)) / gsize;
				binaryInsert(upper, (nb - 1) / 2, nb - 1, lower, gsize, ind, elev(2, jind - 2));
			}
			else
				binaryInsert(upper, (upper.size() / gsize - 1) / 2, upper.size() / gsize - 1, lower, gsize, ind, elev(2, jind - 2));
		}
		if (flag)
			break ;
		jind++;
	}
	for(size_t	ind = upper.size(); ind < tmpl.size(); ind++)
		upper.push_back(tmpl[ind]);
	tmpl = upper;
}

// template <typename T>
void	FordJohnson(unsigned long gsize, std::vector<long> &tmpl)
{
	for(int ind = 1; tmpl.size() > gsize * (ind + 1) - 1; ind += 2)
		if (tmpl[gsize * ind - 1] > tmpl[gsize * (ind + 1) - 1])
			tmplSwap(tmpl, gsize, gsize * ind, gsize * (ind + 1));
	if (tmpl.size() >= (gsize * 2) * 2)
		FordJohnson((gsize * 2), tmpl);
	organizeGroups(gsize, tmpl);
}

# include <algorithm>


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
				throw(Error());
			}
			s << " " << str;
		}
	}
	// startTimer();
	std::vector <long> tmpl = streamToTemplate(s); 
	FordJohnson(1, tmpl);
	if (std::is_sorted(tmpl.begin(), tmpl.end()))
		std::cout << "is sorted" << std::endl;
	else
		std::cout << "its not" << std::endl;

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
