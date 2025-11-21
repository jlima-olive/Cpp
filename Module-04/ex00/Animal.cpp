/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:58:57 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/21 12:44:44 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound(void) const
{
	std::cout << sound << std::endl;
}

Animal::Animal()
{
	sound = "*lawn mower noises*";
	type = "huh?";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj) : 
type(obj.type),
sound(obj.sound)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	std::cout << "Animal copy asignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
