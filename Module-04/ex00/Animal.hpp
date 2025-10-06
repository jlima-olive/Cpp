/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:15:37 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 14:43:52 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal &obj);
	Animal	&operator=(const Animal &obj);
	~Animal();
	const std::string	getType(void) const;
	void	setType(const std::string str);
	void	makeSound(void) const;
};

#endif