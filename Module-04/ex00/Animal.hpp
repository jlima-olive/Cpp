/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:48:36 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/18 12:58:54 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
protected:
	std::string	type;
	std::string	sound;
public:
	Animal();
	~Animal();
	void makeSound(void);
};
