/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:25:28 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 12:09:43 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	int	defense;
public:
	ScavTrap();
	ScavTrap(std::string name, unsigned hp, unsigned energy, unsigned dps);
	ScavTrap(const ScavTrap &obj);
	ScavTrap	&operator=(const ScavTrap &obj);
	void	takeDamage(unsigned int amount);
	void	guardGate();
	~ScavTrap();
};

#endif