/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:25:53 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 14:21:00 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	// type = "Dog";
	setType("Dog");
	std::cout << "Dog default constructor called" << std::endl;	
}

Dog::Dog(const Dog &obj)
{
	this->setType(obj.getType());
	std::cout << "Dog copy constructor called" << std::endl;	
}

Dog	&Dog::operator=(const Dog &obj)
{
	this->setType(obj.getType());
	std::cout << "Dog asignment operator called" << std::endl;	
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;	
}
