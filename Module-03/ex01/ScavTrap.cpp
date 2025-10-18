/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:05 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 11:05:15 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
ClapTrap("ClapTrap", 100, 50, 20),
defense(0)
{
	std::cout << "ScavTrap default constructor called" << std::endl;	
}

ScavTrap::ScavTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
ClapTrap(name, hp, energy, dps),
defense(0)
{
	std::cout << "ScavTrap argument constructor called" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &obj) :
ClapTrap(obj.name, obj.hp, obj.energy, obj.dps),
defense(0)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;	
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->name = obj.name;
	this->energy = obj.energy;
	this->hp = obj.hp;
	this->dps = obj.dps;
	std::cout << "ScavTrap asignment operator called" << std::endl;	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;	
}

void ScavTrap::guardGate()
{
	defense = 1;
	std::cout << "ScavTrap " << name << " is in Gate keeper mode" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << " is already dead" << std::endl;
		return ;
	}
	if (defense)
	{
		std::cout << "ScavTrap " << name << " is in Gate keeper mode"
				  << " so he didnt take damage" << std::endl;
		defense = 0;
		return ;
	}
	std::cout << "ScavTrap " << name << " got attacked for "
		  << amount << " points of damage!" << std::endl;
	if (amount <= hp)
		hp -= amount;
	else
		hp = 0;
}
