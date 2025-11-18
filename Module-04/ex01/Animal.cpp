/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:58:57 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 14:39:56 by jlima-so         ###   ########.fr       */
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
sound(obj.sound),
type(obj.type)
{
}

Animal &Animal::operator=(const Animal &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
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
