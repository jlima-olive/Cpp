/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:58:57 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/21 11:53:39 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*wronglawn mower noises*" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	sound = "*wronglawn mower noises*";
	type = "huh?";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) :
type(obj.type),
sound(obj.sound)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	std::cout << "WrongAnimal copy asignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
