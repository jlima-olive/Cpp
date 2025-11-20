/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:05 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 11:45:23 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : 
ClapTrap("FragTrap")
{
	hp = 100;
	energy = 100;
	dps = 30;
	type = "FragTrap";
	std::cout << "FragTrap default constructor called" << std::endl;	
}

FragTrap::FragTrap(std::string name) :
ClapTrap(name)
{
	hp = 100;
	energy = 100;
	dps = 30;
	type = "FragTrap";
	std::cout << "FragTrap argument constructor called" << std::endl;	
}

FragTrap::FragTrap(const FragTrap &obj) :
ClapTrap(obj)
{
	type = "FragTrap";
	std::cout << "FragTrap copy constructor called" << std::endl;	
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	this->name = obj.name;
	this->energy = obj.energy;
	this->hp = obj.hp;
	this->dps = obj.dps;
	this->type = "FragTrap";
	std::cout << "FragTrap asignment operator called" << std::endl;	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;	
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " has requested a positively high five" << std::endl;
}

