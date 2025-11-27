/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:58:34 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 18:55:05 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	class iterator
	{
	private:
		unsigned int	it;
		unsigned int	size;
		bool			t_value;
	public:
		// iterator()
		// {
			// // size = 0;
			// it = -1;
			// // t_value = false;
		// }
		// iterator	&end()
		// {
			// t_value
		// }
		// iterator	&at(unsigned int n)
		// {
			// it = n;
			// std::cout << "we're looking at:" << n << std::endl;
		// }
		// iterator(iterator	&obj);
		// ~iterator();
		// iterator	&operator=(iterator	&it);
		// iterator	operator+(iterator	&it) const;
		// iterator	operator-(iterator	&it) const;
		// iterator	operator*(iterator	&it) const;
		// iterator	&operator--(int);
		// iterator	&operator--();
		// iterator	&operator++(int);
		// iterator	&operator++();
		T			&operator*()
		// bool		operator==(iterator	&it) const;
	};
	iterator	&begin()
	{

	}
	iterator	&at()
	{

	}
	iterator	&end()
	{

	}

};

#endif