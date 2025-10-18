/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:05 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 11:44:37 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : 
ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;	
}

FragTrap::FragTrap(std::string name, unsigned hp, unsigned energy, unsigned dps) :
ClapTrap(name, hp, energy, dps)
{
	std::cout << "FragTrap argument constructor called" << std::endl;	
}

FragTrap::FragTrap(const FragTrap &obj) :
ClapTrap(obj.name, obj.hp, obj.energy, obj.dps)
{
	std::cout << "FragTrap copy constructor called" << std::endl;	
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	(ClapTrap)(*this) = obj;
	// this->name = obj.name;
	// this->energy = obj.energy;
	// this->hp = obj.hp;
	// this->dps = obj.dps;
	std::cout << "FragTrap asignment operator called" << std::endl;	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " has requested a positive high-fives request" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "FragTrap " << name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " got attacked for "
		  << amount << " points of damage!" << std::endl;
	if (amount <= hp)
		hp -= amount;
	else
		hp = 0;
}
