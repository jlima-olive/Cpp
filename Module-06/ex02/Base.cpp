/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:34:44 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 18:11:25 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <Base.hpp>
#include <C.hpp>

Base::~Base()
{
	std::cout << "default destructor called" << std::endl;
}
