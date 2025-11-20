/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:05:01 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/20 12:15:42 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << std::endl << "*****argument constructor******" << std::endl << std::endl;
    DiamondTrap johnny("johnny");
    johnny.attack("random_guy");

    std::cout << std::endl << "*****default constructor******" << std::endl << std::endl;
    DiamondTrap trap;
    trap.attack("random_guy");

    std::cout << std::endl << "*****copy constructor******" << std::endl << std::endl;
    DiamondTrap john_cpy = johnny;
    // DiamondTrap john_cpy(johnny);
    john_cpy.attack("random_guy");

    std::cout << std::endl << "*****coppy assigment operator******" << std::endl << std::endl;
    trap = john_cpy;
    trap.attack("random_guy");

    std::cout << std::endl << "*****Fin******" << std::endl << std::endl;

    // std::cout << std::endl << std::endl;
    // DiamondTrap *slap1 = new DiamondTrap("jojo");
    // delete (slap1);
    // DiamondTrap slap_def;
    // DiamondTrap slap_def2;
    // DiamondTrap slap_cpy(slap_def);
    // slap1 = new DiamondTrap("jojo");
// 
    // slap_def2 = slap_def;
    // for(int i = 0; i < 15; i++)
        // slap1->attack("jojo");
    // slap_cpy.attack(slap_def.getName());
    // delete (slap1);
    // slap1 = new DiamondTrap("jojo");
    // for(int i = 0; i < 5; i++)
    // {
        // slap1->attack("definetly_not_jojo");
    // }
    // slap1->guardGate();
    // slap1->takeDamage(20);
    // for(int i = 0; i < 5; i++)
        // slap1->attack("definetly_not_jojo");
    // delete (slap1);
}