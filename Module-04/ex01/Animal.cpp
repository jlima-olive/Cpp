/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:58:57 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/21 12:47:45 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound(void) const
{
	std::cout << sound << std::endl;
}

// ScavTrap::ScavTrap(const ScavTrap &obj) :
// ClapTrap(obj.name, obj.hp, obj.energy, obj.dps),
// defense(0)

Animal::Animal()
{
	sound = "*lawn mower noises*";
	type = "huh?";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
