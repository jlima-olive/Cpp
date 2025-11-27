/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 23:57:02 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 18:06:14 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stack>
# include <queue>
# include <iostream>
#include <easyfind.tpp>

class NoFound : public std::exception
{
	virtual const char *what() const throw();
};

template <typename T>
void easyfind(T templ, int n);

#endif