/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:48:25 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/17 16:26:32 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <Base.hpp>

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The class is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "The class is A" << std::endl;
		return;
	}
	catch (...)
	{}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "The class is B" << std::endl;
		return;
	}
	catch (...)
	{}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "The class is C" << std::endl;
		return;
	}
	catch (...)
	{}
}
