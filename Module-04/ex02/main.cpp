/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:00:23 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 15:20:41 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *barn[10];
	int		max;

	max = 10;
	for (int i = 0; i < max / 2; i++)
		barn[i] = new Cat();
	for (int i = max / 2; i < max; i++)
		barn[i] = new Dog();
	for (int i = 0; i < max; i++)
		std::cout << barn[i]->getType() << std::endl;
	for (int i = 0; i < max; i++)
		barn[i]->makeSound();
	for (int i = 0; i < max / 2; i++)
		delete (barn[i]);
	for (int i = max / 2; i < max; i++)
		delete (barn[i]);
}
