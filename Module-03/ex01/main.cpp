/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:05:01 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 18:07:29 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap *clap1 = new ClapTrap("jojo", 10, 10, 10);
	delete (clap1);
	ClapTrap clap_def;
	ClapTrap clap_cpy(clap_def);
	clap1 = new ClapTrap("jojo", 10, 10, 10);

	for(int i = 0; i < 15; i++)
		clap1->attack("jojo");
	clap_cpy.attack(clap_def.getName());
	delete (clap1);
	clap1 = new ClapTrap("jojo", 0, 10, 0);
	for(int i = 0; i < 5; i++)
		clap1->attack("definetly not jojo");
	clap1->takeDamage(20);
	for(int i = 0; i < 5; i++)
		clap1->attack("definetly not jojo");

	ScavTrap *scav1 = new ScavTrap("jojo", 10, 10, 10);
	for(int i = 0; i < 51; i++)
		scav1->attack("SCAVVV");
}
