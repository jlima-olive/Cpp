/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:40 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 14:45:00 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
Animal()
{
	type = "cat";
	sound = "Nyahhhhh";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : 
Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	std::cout << "Cat copy asignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}
