/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:08:09 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/20 11:04:41 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	uintptr_t	var;
	Data		*data;
	Data		var1;

	data = &var1;
	data->var = 123456789;

	var = Serializer::serialize(data);
	data = Serializer::deserialize (var);

	std::cout << "data->var=" << data->var << std::endl;
}
a
a