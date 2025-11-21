/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:48:36 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/21 11:51:10 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
	std::string	sound;
public:
	WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &obj);
	WrongAnimal(const WrongAnimal &obj);
	~WrongAnimal();
	void makeSound(void) const;
	std::string	getType() const;
};

#endif