/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/18 11:47:44 by jlima-so         ###   ########.fr       */
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
	Fixed const x;
	Fixed const y;
	int			flag;
public:
	Point();
	Point(const Point &obj);
	Point(const Fixed &x, const Fixed &y);
	Point	&operator=(Point& obj);
	~Point();
	float	getX();
	float	getY();
};

bool bsp(Point &a, Point &b, Point &c, Point &point);

#endif