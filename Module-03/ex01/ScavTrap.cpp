/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:53:31 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 18:05:59 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << "is too dead to do anything" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << "ScavTrap " << name << "is too tired to do anything" << std::endl;
		return ;
	}
	energy--;
	std::cout << "ScavTrap " << name << "is now in Gate Keeper Mode" << std::endl;
}

std::string ScavTrap::getName(void)
{
	return (name);
}

void ScavTrap::attack(const std::string& target)
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << "is too dead to do anything" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << "ScavTrap " << name << "is too tired to do anything" << std::endl;
		return ;
	}
	energy--;
	std::cout << "ScavTrap " << name << " attacks " << target
			  << ", causing " << dps << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << "is already dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " got attacked for "
		  << amount << " points of damage!" << std::endl;
	if (amount < hp)
		hp -= amount;
	else
		hp = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << "is too dead to do anything" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << "ScavTrap " << name << "is too tired to do anything" << std::endl;
		return ;
	}
	energy--;
	hp += amount;
}

ScavTrap::ScavTrap() :
name("ScavTrap"),
hp(100),
energy(50),
dps(20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;	
}

ScavTrap::ScavTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
name(name),
hp(hp),
energy(energy),
dps(dps)
{
	std::cout << "ScavTrap argument constructor called" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &obj) :
name(obj.name),
hp(obj.hp),
energy(obj.energy),
dps(obj.dps)
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
