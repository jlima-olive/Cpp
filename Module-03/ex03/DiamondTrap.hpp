/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:25:28 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 11:04:50 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	int	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name, unsigned hp, unsigned energy, unsigned dps);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap	&operator=(const DiamondTrap &obj);
	void	takeDamage(unsigned int amount);
	void	guardGate();
	~DiamondTrap();
};

#endif