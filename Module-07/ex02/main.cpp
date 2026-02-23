/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:18:52 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/23 14:50:27 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <string.h>

int main(void)
{
	Array<std::string>	array(10);
	std::string str = "hello world";

	array[9] = str;
	std::cout << "array[9] = '" << array[9] << "'" << std::endl;
	// char str[12];
// 
	// strcpy(str, "hello world");
	// std::cout << str << std::endl;
	// iter(str, 12, sub<char &>);
	// std::cout << str << std::endl;
	// iter(str, 12, add);
	// std::cout << str << std::endl;
}