/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:53:31 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 18:05:07 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName(void)
{
	return (name);
}

void ClapTrap::attack(const std::string& target)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << "is too dead to do anything" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << "ClapTrap " << name << "is too tired to do anything" << std::endl;
		return ;
	}
	energy--;
	std::cout << "ClapTrap " << name << " attacks " << target
			  << ", causing " << dps << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << "is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " got attacked for "
		  << amount << " points of damage!" << std::endl;
	if (amount < hp)
		hp -= amount;
    else
		hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << "is too dead to do anything" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << "ClapTrap " << name << "is too tired to do anything" << std::endl;
		return ;
	}
	energy--;
	hp += amount;
}

ClapTrap::ClapTrap() :
name("ClapTrap"),
hp(100),
energy(50),
dps(20)
{
	std::cout << "ClapTrap default constructor called" << std::endl;	
}

ClapTrap::ClapTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
name(name),
hp(hp),
energy(energy),
dps(dps)
{
	std::cout << "ClapTrap argument constructor called" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap &obj) :
name(obj.name),
hp(obj.hp),
energy(obj.energy),
dps(obj.dps)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;	
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->name = obj.name;
	this->energy = obj.energy;
	this->hp = obj.hp;
	this->dps = obj.dps;
	std::cout << "ClapTrap asignment operator called" << std::endl;	
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;	
}
