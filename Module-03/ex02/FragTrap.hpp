/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:25:28 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 13:59:22 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name, unsigned hp, unsigned energy, unsigned dps);
	FragTrap(const FragTrap &obj);
	FragTrap	&operator=(const FragTrap &obj);
	void	highFivesGuys(void);
	~FragTrap();
};

#endif