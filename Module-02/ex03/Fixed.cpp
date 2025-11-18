/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:20 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 23:33:05 by jlima-so         ###   ########.fr       */
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
	int			temp;
	int	ret;

	std::cout << "Float constructor called" << std::endl;
	temp = numb;
	ret = 255 * (float)(numb - temp) + 1;
	setRawBits((temp << 8) + ret);
}

float Fixed::toFloat( void ) const
{
	float	ret;
	int		temp;;

	temp = 1;
	ret = this->toInt();
	for (int i = 8; i > 0; i--)
	{
		if (temp & value)
			ret += (float)(1 / pow(2, i));
		temp = temp << 1;
	}
	return (ret);
}

int Fixed::toInt( void ) const {	return (value >> 8);	}

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

int	Fixed::operator>(const Fixed& obj)
{
	return (this->toFloat() > obj.toFloat());
}

int	Fixed::operator<(const Fixed& obj)
{
	return (this->toFloat() < obj.toFloat());
}

int	Fixed::operator>=(const Fixed& obj)
{
	return (this->toFloat() >= obj.toFloat());
}

int	Fixed::operator<=(const Fixed& obj)
{
	return (this->toFloat() <= obj.toFloat());
}

int	Fixed::operator==(const Fixed& obj)
{
	return (this->toFloat() == obj.toFloat());
}

int	Fixed::operator!=(const Fixed& obj)
{
	return (this->toFloat() != obj.toFloat());
}

float	Fixed::operator+(const Fixed& obj)
{
	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator-(const Fixed& obj)
{
	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator*(const Fixed& obj)
{
	return (this->toFloat() * obj.toFloat());
}

float	Fixed::operator/(const Fixed& obj)
{
	return (this->toFloat() / obj.toFloat());
}

 float	Fixed::operator++(int)
{
	float	temp(this->toFloat());

	this->value = this->value + 1;
	return (temp);
}

float	Fixed::operator++()
{
	this->value = this->value + 1;
	return (this->toFloat());	
}

float	Fixed::operator--(int)
{
	float	temp(this->toFloat());

	this->value = this->value - 1;
	return (temp);
}

float	Fixed::operator--()
{
	this->value = this->value - (float)(1 / 256);
	return (this->toFloat());
}

const Fixed	&Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return (obj2);
	return (obj1);
}

const Fixed	&Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max( Fixed& obj1,  Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj2);
	return (obj1);
}

Fixed	&Fixed::min( Fixed& obj1,  Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

