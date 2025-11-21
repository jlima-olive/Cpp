/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:54:13 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/21 12:50:38 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
Animal()
{
	type = "Dog";
	sound = "what does the dog say";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : 
Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	std::cout << "Dog copy asignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "wuamwuamwuwamwauam" << std::endl;
}
