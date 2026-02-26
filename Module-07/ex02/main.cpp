/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:18:52 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/26 11:57:35 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <string.h>

int main(void)
{
	Array<std::string>	array(10);
	std::string str = "hello world";
	array[9] = str;
	Array<std::string> const	carray(array);

	std::cout << "array[9] = '" << array[9] << "'" << std::endl;
	std::cout << "carray[9] = '" << carray[9] << "'" << std::endl;
	// char str[12];
// 
	// strcpy(str, "hello world");
	// std::cout << str << std::endl;
	// iter(str, 12, sub<char &>);
	// std::cout << str << std::endl;
	// iter(str, 12, add);
	// std::cout << str << std::endl;
}