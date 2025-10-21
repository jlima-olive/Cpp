/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:00:23 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/21 12:49:22 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// ideas = new std::string[100];
	Animal animals[10];
	Animal Cat[5];
	Animal Dog[5];

	for (int i = 0; i < 5; i++)
		animals[i] = Dog[i];
	for (int i = 5; i < 10; i++)
		animals[i] = Cat[i - 5];
	for (int i = 0; i < 10; i++)
		delete (animals + i);
	
}
