/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:00:23 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 14:52:36 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete j;
		delete i;
	}
	const WrongAnimal* j = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	i->makeSound();//will not output the cat sound!
	j->makeSound();
	delete j;
	delete i;

	return 0;
}
