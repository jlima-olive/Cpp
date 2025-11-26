/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:08:09 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 17:13:16 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	unsigned long int var;
	Data *data;

	data = (Data *)malloc(sizeof(Data *));
	
	data->var = 123456789;

	var = Serializer::serialize(data);
	data = Serializer::deserialize (var);
	std::cout << "data->var=" << data->var << std::endl;
}