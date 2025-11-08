/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 23:34:59 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Point_HPP
# define Point_HPP

# ifndef LITERAL
#  define LITERAL 8
# endif

#include <iostream>
#include "Fixed.hpp"

class	Point
{
protected:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const Point &obj);
	Point	&operator=(const Point& obj);
	float	operator-(const Point& obj);
	Point(const Fixed &x, const Fixed &y);
	~Point();
	float	getX();
	float	getY();
};

std::ostream& operator<<(std::ostream &out, const Point &obj);

#endif