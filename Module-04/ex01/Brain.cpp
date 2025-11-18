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
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Wind";
		
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.getIdeas(i);
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = obj.getIdeas(i);
	}
	std::cout << "Brain copy asignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

std::string	Brain::getIdeas(int nb) const
{
	if (nb < 100)
		return (ideas[nb]);
	return (NULL);
}

