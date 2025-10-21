/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:58:57 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/21 12:13:27 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "Brain default destructor called" << std::endl;
}

std::string	Brain::getIdeas(int nb) const
{
	if (nb < 100)
		return (ideas[nb]);
	return (NULL);
}
