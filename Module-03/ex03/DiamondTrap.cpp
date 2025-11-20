/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:36:27 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 11:54:25 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : 
ClapTrap(),
FragTrap(),
ScavTrap()
{
	this->name = ClapTrap::name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dps = FragTrap::dps;
	std::cout << "DiamondTrap default constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(std::string var_name) : 
ClapTrap(),
FragTrap(),
ScavTrap()
{
	this->_name = var_name;
	ClapTrap::name = var_name + "_clap_name";
	this->name = ClapTrap::name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dps = FragTrap::dps;
	std::cout << "DiamondTrap default constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :
ClapTrap(obj),
FragTrap(obj),
ScavTrap(obj)
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
