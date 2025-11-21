/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:54:13 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 15:17:27 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
Animal(),
brain()
{
	type = "Dog";
	sound = "wuamwuamwuwamwauam";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : 
Animal(obj),
brain(obj.brain)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	this->brain = obj.brain;
	std::cout << "Dog copy asignment operator called" << std::endl;
	return *this;
}

std::string	Dog::getType() const
{
	return (type);
}
