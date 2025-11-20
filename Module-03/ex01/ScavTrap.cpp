/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:05 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 12:36:25 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
ClapTrap("ScavTrap", 100, 50, 20),
defense(0)
{
	type = "ScavTrap";
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
ClapTrap(name, hp, energy, dps),
defense(0)
{
	type = "ScavTrap";
	std::cout << "ScavTrap argument constructor called" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &obj) :
ClapTrap(obj),
defense(0)
{
	type = "ScavTrap";
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->name = obj.name;
	this->hp = obj.hp;
	this->energy = obj.energy;
	this->dps = obj.dps;
	this->defense = 0;
	this->type = "ScavTrap";
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
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
