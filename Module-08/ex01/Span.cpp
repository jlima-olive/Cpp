/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:29:20 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 15:45:55 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() :
max_size(0),
size(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span &obj):
max_size(obj.max_size),
size(obj.size),
array(obj.array)
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &obj)
{
	size = obj.size;
	size = obj.max_size;
	array = obj.array;
	std::cout << "Span copy assignment operator called" << std::endl;
	return (*this);
}

Span::Span(unsigned int n) :
max_size(n),
size(0)
{
	std::cout << "Span argument constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

const char *Span::container_already_full::what()const throw()
{
	return ("Container is already full");
}

const char *Span::cant_find_span::what()const throw()
{
	return ("Cant find span, array is too small for that");
}

void Span::addNumber(int n)
{
	if (size == max_size || size == array.max_size())
		throw (container_already_full());
	size++;
	array.push_back(n);
}

unsigned int Span::shortestSpan()
{
	if (size == 0 || size == 1)
		throw(cant_find_span());

	unsigned int	ind1 = 0;
	unsigned int	ind2;
	unsigned int	small = (unsigned)__INT_MAX__ * 2;
	long			temp;

	while (ind1 < size)
	{
		ind2 = ind1;
		while (++ind2 < size)
		{
			temp = array[ind1] - array[ind2];
			temp = temp * (temp > 0) - temp * (temp < 0);
			small = temp * (temp < small) + small * (small <= temp);
			// if (temp < small)
			// small = temp;
		}
		ind1++;
	}
	return (small);
}

unsigned int Span::longestSpan()
{
	if (size == 0 || size == 1)
		throw(cant_find_span());
	
	unsigned int	ind1 = 0;
	unsigned int	ind2;
	unsigned int	big = 0;
	long			temp;

	while (ind1 < size)
	{
		ind2 = ind1;
		while (++ind2 < size)
		{
			temp = array[ind1] - array[ind2];
			temp = temp * (temp > 0) - temp * (temp < 0);
			big = temp * (temp > big) + big * (big >= temp);
			// if (temp > big)
			// big = temp;
		}
		ind1++;
	}
	return (big);
}

void Span::insert(std::vector<int>::iterator &it, unsigned int n)
{
	for (size_t i = 0; i <= n; i++)
	{
		addNumber(*it);
		it++;
	}
}
