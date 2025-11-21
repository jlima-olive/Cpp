/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:36:27 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 12:30:28 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : 
ClapTrap(),
FragTrap(),
ScavTrap()
{
	this->_name = ClapTrap::name;
	ClapTrap::name = ClapTrap::name + "_clap_name";
	this->name = ClapTrap::name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dps = FragTrap::dps;
	std::cout << "DiamondTrap default constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(std::string var_name) : 
ClapTrap(var_name),
FragTrap(var_name),
ScavTrap(var_name)
{
	this->_name = var_name;
	ClapTrap::name = var_name + "_clap_name";
	this->name = ClapTrap::name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dps = FragTrap::dps;
	std::cout << "DiamondTrap argument constructor called" << std::endl;	
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :
ClapTrap(obj),
FragTrap(obj),
ScavTrap(obj)
{
	this->_name = obj._name;
	ClapTrap::name = obj._name + "_clap_name";
	this->name = ClapTrap::name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->dps = FragTrap::dps;	std::cout << "DiamondTrap copy constructor called" << std::endl;	
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	this->_name = obj._name;
	this->name = obj.name;
	this->hp = obj.hp;
	this->energy = obj.energy;
	this->defense = obj.defense;
	this->dps = obj.dps;
	std::cout << "DiamondTrap copy asignment operator called" << std::endl;	
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;	
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am both " << name << " and " << _name << std::endl;
}
