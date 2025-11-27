/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:58:34 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 17:34:19 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack
{
public:
	class iterator
	{
	private:
		unsigned int	it;
		bool			value;
	public:
		iterator();
		iterator(iterator	&obj);
		~iterator();
		iterator	&operator=(iterator	&it);
		iterator	operator+(iterator	&it) const;
		iterator	operator-(iterator	&it) const;
		iterator	operator*(iterator	&it) const;
		iterator	&operator--(int);
		iterator	&operator--();
		iterator	&operator++(int);
		iterator	&operator++();
		T			&operator*();
		bool		operator==(iterator	&it) const;
		iterator	&begin();
		iterator	&begin() const;
		iterator	&end();
		iterator	&end()const;
		iterator	&at();
	};
};

#endif