/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/10/06 11:20:41 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# ifndef LITERAL
#  define LITERAL 8
# endif

#include <iostream>

class	Fixed
{
private:
	int					value;
	static const int	LIT = LITERAL;
public:
	Fixed();
	Fixed(const Fixed &obj);
	void	operator=(const Fixed& obj);
	int	operator>(const Fixed& obj);
	int	operator<(const Fixed& obj);
	int	operator>=(const Fixed& obj);
	int	operator<=(const Fixed& obj);
	int	operator==(const Fixed& obj);
	int	operator!=(const Fixed& obj);
	float	operator+(const Fixed& obj);
	float	operator-(const Fixed& obj);
	float	operator*(const Fixed& obj);
	float	operator/(const Fixed& obj);
	float	operator++(int);
	float	operator++();
	float	operator--(int);
	float	operator--();
	static const Fixed	&max(const Fixed& obj1, const Fixed& obj2);
	static const Fixed	&min(const Fixed& obj1, const Fixed& obj2);
	static Fixed	&max( Fixed& obj1,  Fixed& obj2);
	static Fixed	&min( Fixed& obj1,  Fixed& obj2);
	Fixed(const int numb);
	Fixed(const float numb);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif