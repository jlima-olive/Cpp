/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:40 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 13:03:23 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
WrongAnimal()
{
	type = "Wrongcat";
	sound = "wrongNyahhhhh";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : 
WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	this->sound = obj.sound;
	this->type = obj.type;
	std::cout << "WrongCat copy asignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "wrongNyahhhhh" << std::endl;
}