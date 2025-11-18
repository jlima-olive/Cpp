/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:45:44 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 11:48:46 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{
	std::cout << "Default constructor operator called" << std::endl;
}

Point::Point(const Point &obj) :
x(obj.x),
y(obj.y)
{
    flag = 0;
	std::cout << "Copy Constructor called" << std::endl;
}

Point::Point(const Fixed &x, const Fixed &y) :
x(x),
y(y)
{
    flag = 0;
	std::cout << "Argument Constructor called" << std::endl;
}

Point	&Point::operator=(Point& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (obj);
}

Point::~Point()
{
	std::cout << "Point Copy assignment operator called" << std::endl;
}

float	Point::getX()
{
	return (x.toFloat());	
}

float	Point::getY()
{
	return (y.toFloat());	
}

float sign(Point &p1, Point &p2, Point &p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
		 - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point &a, Point &b, Point &c, Point &point)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
