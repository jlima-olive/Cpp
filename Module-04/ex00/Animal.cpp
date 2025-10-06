/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:15:37 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 14:31:49 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

void	Animal::makeSound(void) const
{
	if (this->getType() == "Cat")
		std::cout << "miau miau" << std::endl;
	else if (this->getType() == "Dog")
		std::cout << "bark bark" << std::endl;
	else
		std::cout << "*lawn mower noises*" << std::endl;
}

void	Animal::setType(const std::string str)
{
	type = str;
}

const std::string	Animal::getType(void) const
{
	return (type);
}

Animal::Animal()
{
	// type = "xXX_joaogzinhoameplay123_XXx";
}

Animal::Animal(std::string type) :
type(type)
{
	std::cout << "Animal String constructor called" << std::endl;	
}

Animal::Animal(const Animal &obj) :
type(obj.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;	
}

Animal	&Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "Animal Copy assignment operator called" << std::endl;	
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
