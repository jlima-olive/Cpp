/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:48:36 by namejojo          #+#    #+#             */
/*   Updated: 2025/11/18 15:22:50 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;
	std::string	sound;
public:
	Animal();
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual ~Animal();
	void makeSound(void) const;
	virtual std::string	getType() const = 0;
};

#endif