/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:12:51 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/26 11:56:02 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <stdexcept>
# include <Array.tpp>

template <typename T>
class Array
{
private:
	T				*array;
	unsigned int	len;
public:
	Array() :
	array(new T[0]),
	len(0)
	{
		std::cout << "Array default constructor called" << std::endl;
	}
	Array(unsigned int n) :
	array(new T[n]),
	len(n)
	{
		std::cout << "Array argument constructor called" << std::endl;
	}
	Array(Array &obj) :
	array(new T[obj.len]),
	len(obj.len)
	{
		for (size_t i = 0; i < len; i++)
			array[i] = obj[i];
		std::cout << "Array copy constructor called" << std::endl;
	}
	Array	&operator=(Array &obj)
	{
		delete []array;
		len = obj.len;
		array = new T[obj.len];
		for (size_t i = 0; i < len; i++)
			array[i] = obj[i];
		std::cout << "Array copy assignment operator called" << std::endl;
		return (*this);
	}
	class out_of_bounds : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Couldnt access requested index");
		}
	};
	~Array()
	{
		delete []array;
		std::cout << "Array destructor called" << std::endl;
	}
	T	&operator[](unsigned int n)
	{
		if (n >= len)
			throw (out_of_bounds());
		return (array[n]);
	}
	T const	operator[](unsigned int n) const
	{
		if (n >= len)
			throw (out_of_bounds());
		return (array[n]);
	}
	unsigned int	size() const
	{
		return (len);
	}
};

#endif