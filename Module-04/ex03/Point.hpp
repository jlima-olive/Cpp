/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/10/06 13:08:26 by namejojo         ###   ########.fr       */
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
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const Point &obj);
	Point	&operator=(const Point& obj);
	float Point::operator-(const Point& obj);
	Point(const Fixed &x, const Fixed &y);
	~Point();
	float	getX();
	float	getY();
};

std::ostream& operator<<(std::ostream &out, const Point &obj);

#endif