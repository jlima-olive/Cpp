/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:57:02 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 18:06:06 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <stack>
# include <queue>
# include <iostream>
#include <easyfind.hpp>

const char *NoFound::what() const throw()
{
	return ("The integer was not on the container");
}

template <typename T>
void easyfind(T templ, int n)
{
	for (typename T::iterator it = templ.begin(); it != templ.end(); it++)
		if (*it == n)
			return ;
	throw (NoFound());
}

#endif