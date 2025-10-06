/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:20:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/10/03 15:31:39 by jlima-so         ###   ########.fr       */
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
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif