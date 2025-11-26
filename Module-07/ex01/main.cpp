/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:18:52 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 20:33:56 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <funcs.hpp>
#include <string.h>

void add(char &ch)
{
	if (ch != ' ' && ch)
		ch++;
}

template <typename T>
void sub(T ch)
{
	if (ch != ' ' && ch)
		ch--;
}

int main(void)
{
	char str[12];

	strcpy(str, "hello world");
	std::cout << str << std::endl;
	iter(str, 12, sub<char &>);
	std::cout << str << std::endl;
	iter(str, 12, add);
	std::cout << str << std::endl;

}