/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:05:01 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 11:53:35 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    // ClapTrap *clap1 = new ClapTrap("jojo", 10, 10, 10);
    // delete (clap1);
    // ClapTrap clap_def;
    // ClapTrap clap_cpy(clap_def);
    // clap1 = new ClapTrap("jojo", 10, 10, 10);

    // for(int i = 0; i < 15; i++)
    //     clap1->attack("jojo");
    // clap_cpy.attack(clap_def.getName());
    // delete (clap1);
    // clap1 = new ClapTrap("jojo", 0, 10, 0);
    // for(int i = 0; i < 5; i++)
    //     clap1->attack("definetly not jojo");
    // clap1->takeDamage(20);
    // for(int i = 0; i < 5; i++)
    //     clap1->attack("definetly not jojo");
    /*******************************************************************************/
    std::cout << std::endl << std::endl;
    DiamondTrap *slap1 = new DiamondTrap("jojo");
    delete (slap1);
    DiamondTrap slap_def;
    DiamondTrap slap_def2;
    DiamondTrap slap_cpy(slap_def);
    slap1 = new DiamondTrap("jojo");

    slap_def2 = slap_def;
    for(int i = 0; i < 15; i++)
    {
        // std::cout << "here" << std::endl;
        slap1->attack("jojo");
    }
    slap_cpy.attack(slap_def.getName());
    delete (slap1);
    slap1 = new DiamondTrap("jojo");
    for(int i = 0; i < 5; i++)
    {
        slap1->attack("definetly_not_jojo");
    }
    slap1->guardGate();
    slap1->takeDamage(20);
    for(int i = 0; i < 5; i++)
        slap1->attack("definetly_not_jojo");
    delete (slap1);
}