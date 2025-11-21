/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:40 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 15:04:42 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
Animal(),
brain()
{
	type = "Cat";
	sound = "wuamwuamwuwamwauam";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : 
Animal(obj),
brain(obj.brain)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	this->brain = obj.brain;
	std::cout << "Cat copy asignment operator called" << std::endl;
	return *this;
}
