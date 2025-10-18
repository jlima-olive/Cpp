/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:37 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 12:05:47 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned	hp;
	unsigned	energy;
	unsigned	dps;
public:
	std::string getName(void);
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap(std::string name, unsigned hp, unsigned energy, unsigned dps);
	ClapTrap	&operator=(const ClapTrap &obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif