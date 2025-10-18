/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:36:27 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 12:42:28 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : 
ScavTrap("DiamondTrap", 100, 50, 30)
{
	this->name = this->name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
ScavTrap(name + "_clap_name", hp, energy, dps)
{
	std::cout << "DiamondTrap argument constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :
ClapTrap(obj.name + "_clap_name", obj.hp, obj.energy, obj.dps),
FragTrap(obj.name + "_clap_name", obj.hp, obj.energy, obj.dps),
ScavTrap(obj.name + "_clap_name", obj.hp, obj.energy, obj.dps)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;	
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	(ScavTrap)(*this) = obj;
	this->name = name + "_clap_name";
	this->defense = 0;
	std::cout << "DiamondTrap asignment operator called" << std::endl;	
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;	
}

void DiamondTrap::guardGate()
{
	defense = 1;
	std::cout << "DiamondTrap " << name << " is in Gate keeper mode" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "DiamondTrap " << name << " is already dead" << std::endl;
		return ;
	}
	if (defense)
	{
		std::cout << "DiamondTrap " << name << " is in Gate keeper mode"
				  << " so he didnt take damage" << std::endl;
		defense = 0;
		return ;
	}
	std::cout << "DiamondTrap " << name << " got attacked for "
		  << amount << " points of damage!" << std::endl;
	if (amount <= hp)
		hp -= amount;
	else
		hp = 0;
}
