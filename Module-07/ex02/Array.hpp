/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:12:51 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 21:57:54 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T	*array;
	int	size;
public:
	Array() :
	size(0),
	array(new T[0])
	{
		std::cout << "Array default constructor called" << std::endl;
	}
	Array(unsigned int n) :
	size(n),
	array(new T[n])
	{
		std::cout << "Array argument constructor called" << std::endl;
	}
	Array(Array &obj) :
	size(obj.size),
	array(new T[obj.size])
	{
		for (size_t i = 0; i < size; i++)
			array[i] = obj[i];
		std::cout << "Array copy constructor called" << std::endl;
	}
	Array	&operator=(Array &obj)
	{
		delete []array;
		size = obj.size;
		array = new T[n];
		for (size_t i = 0; i < size; i++)
			array[i] = obj[i];
		std::cout << "Array copy assignment operator called" << std::endl;
		return (*this);
	}
	~Array()
	{
		delete []array;
		std::cout << "Array destructor called" << std::endl;
	}
	T	&operator[](unsigned int n)
	{
		if (n >= size)
			throw (std::out_of_range());
		return (array[n]);
	}
	unsigned int	size() const
	{
		return (size);
	}
};

#endif