/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:23:17 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 23:28:38 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib> 
#include <ctime> 

class Base
{
public:
	virtual ~Base();
	static Base * generate(void);
};

void identify(Base& p);
void identify(Base* p);

#endif