/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:20 by jlima-so          #+#    #+#             */
/*   Updated: 2025/10/14 18:16:56 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}
/**************************************************************************************************/
Fixed::Fixed(const int numb)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(numb << 8);
}

Fixed::Fixed(const float numb)
{
	int	temp;
	int	ret;

	std::cout << "Float constructor called" << std::endl;
	temp = numb;
	ret = 256 * (float)(numb - temp) + 0.5;
	setRawBits((temp << 8) + ret);
}

float Fixed::toFloat( void ) const
{
    return ((float)value / (1 << LIT));
}

int Fixed::toInt( void ) const {	return (value >> LIT);	}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

/**************************************************************************************************/

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	value = obj.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Default desstructor called" << std::endl;
	value = 0;
}

void	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.getRawBits();
}
