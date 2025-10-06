/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:25:53 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 14:52:59 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	// type = "Cat";
	setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;	
}

Cat::Cat(const Cat &obj)
// type(obj.get)
{
	// this->type = "OLA";
	this->setType(obj.getType());
	std::cout << "Cat copy constructor called" << std::endl;	
}

Cat	&Cat::operator=(const Cat &obj)
{
	this->setType(obj.getType());
	std::cout << "Cat asignment operator called" << std::endl;	
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;	
}
