/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:25:28 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 11:47:06 by jlima-so         ###   ########.fr       */
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
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap	&operator=(const ScavTrap &obj);
	void	takeDamage(unsigned int amount);
	void	attack(const std::string& target);
	void	guardGate();
	~ScavTrap();
};

#endif