/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:54:38 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 17:07:40 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

uintptr_t Serializer::serialize(Data* ptr)
{
	return ((uintptr_t)ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return ((Data *)raw);
}
