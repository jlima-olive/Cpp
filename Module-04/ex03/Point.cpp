/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:45:44 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 13:10:07 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{}
Point::Point(const Point &obj) :
x(obj.x),
y(obj.y)
{}
Point::Point(const Fixed &x, const Fixed &y) :
x(x),
y(y)
{}

Point	&Point::operator=(const Point& obj)
{
	*this = obj;
	return (*this);
}

Point::~Point()
{
}

float	Point::getX()
{
	return (x.toFloat());	
}

float	Point::getY()
{
	return (y.toFloat());	
}


float sign(Point p1, Point p2, Point p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
		 - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point a, Point b, Point c, Point point)
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
