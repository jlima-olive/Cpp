/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:34:44 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/17 16:10:35 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <Base.hpp>
#include <C.hpp>
#include <unistd.h>
#include <algorithm>
#include <sys/time.h>

Base::~Base()
{
	std::cout << "default destructor called" << std::endl;
}

Base * Base::generate(void)
{
	struct timeval	var;

	gettimeofday(&var, NULL);
	usleep(var.tv_usec % 10);
	if (var.tv_usec % 3 == 2)
		return new A;
	else if (var.tv_usec % 3 >= 1)
		return new B;
	else
		return new C;
}
