/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:36:13 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 16:33:41 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>
#include <cctype>
#include <stdio.h>

void ScalarConverter::convert(const std::string str)
{
	std::string		str_cpy;
	str_cpy = str;
	int	sign = 1;

	for (size_t ind = 0; (str.at(ind) == ' ' || ((str.at(ind) >= 9) && str.at(ind) <= 13)); ind++)
		str_cpy.erase(0, 1);
	if (str_cpy == "-inf" || str_cpy == "+inf" || str_cpy == "-inff" || str_cpy == "+inff")
	{
		std::cout <<
		"char: " << "impossible" << std::endl <<
		"int: " << "impossible" << std::endl <<
		"float: " << str_cpy.at(0) << "inff" << std::endl <<
		"double: " << str_cpy.at(0) << "inf" << std::endl;
		return ;
	}
	while (str_cpy.length() != 0 && (str_cpy.at(0) == '-' || str_cpy.at(0) == '+'))
	{
		if (str_cpy.at(0) == '-')
			sign = -sign;
		str_cpy.erase(0, 1);
	}
	if (str_cpy == "nan" || str_cpy == "nanf")
	{
		std::cout <<
		"char: " << "impossible" << std::endl <<
		"int: " << "impossible" << std::endl <<
		"float: " << "nanf" << std::endl <<
		"double: " << "nan" << std::endl;
		return ;
	}
	if (str_cpy.length() == 0 || !isdigit(str_cpy.at(0)))
	{
		std::cout <<
		"char: " << "impossible" << std::endl <<
		"int: " << "impossible" << std::endl <<
		"float: " << "impossible" << std::endl <<
		"double: " << "impossible" << std::endl;
		return ;
	}
	unsigned char	c;
	double			f;
	f = 0;
	size_t	ind;
	ind = 0;
	while (ind < str_cpy.length() && str_cpy.at(ind) >= '0' && str_cpy.at(ind) <= '9')
	{
		f = f * 10 + (str_cpy.at(ind) - 48);
		ind++;
	}
	c = (unsigned char)(f * sign);
	if (isprint(c))
		std::cout << "char: " << "'" << c << "'" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
	if (f != f || f > __INT_MAX__ || f < -__INT_MAX__ - 1)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << (int)f * sign << std::endl;
	if (ind + 1 < str_cpy.length() && str_cpy.at(ind) == '.' && ++ind)
	{
		long long	temp;
		float		holder;
		temp = 10;
		while (ind < str_cpy.length() && str_cpy.at(ind) >= '0' && str_cpy.at(ind) <= '9')
		{
			holder = (float)(str_cpy.at(ind) - 48) / temp;
			f += holder;
			if (holder == 0 || temp == 1000000000000000000)
				break ;
			temp = temp * 10;
			ind++;
		}
	}
	f = f * sign;
	std::cout <<
	"float: " << (float)f << 'f' << std::endl <<
	"double: " << f << std::endl;
}
