/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namejojo <namejojo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:17:51 by namejojo          #+#    #+#             */
/*   Updated: 2025/10/06 14:42:17 by namejojo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
// private:
	// std::string type;
public:
	Cat();
	Cat(const Cat &obj);
	Cat	&operator=(const Cat &obj);
	~Cat();
};

#endif