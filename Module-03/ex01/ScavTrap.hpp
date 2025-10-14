/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:37 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 19:16:50 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap : public ClapTrap
{
protected:
	std::string name;
	int			hp;
	int			energy;
	int			dps;
public:
	std::string getName(void);
	void guardGate();
	ScavTrap();
	ScavTrap(const ScavTrap &obj);
	ScavTrap(std::string name, unsigned hp, unsigned energy, unsigned dps);
	ScavTrap	&operator=(const ScavTrap &obj);
	~ScavTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif