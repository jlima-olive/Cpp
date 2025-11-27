/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:10:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 14:47:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

class Span
{
public:
	unsigned int		max_size;
	unsigned int		size = 0;
	std::vector<int>	array;

	Span();
	Span(Span &obj);
	Span &operator=(Span &obj);
	Span(unsigned int n);
	~Span();
	void addNumber(int n);
	class container_already_full : public std::exception
	{
		virtual const char *what()const throw();
	};
	class cant_find_span : public std::exception
	{
		virtual const char *what()const throw();
	};
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif