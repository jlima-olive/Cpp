/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:07:52 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 19:54:16 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_HPP
# define FUNCS_HPP

# include <iostream> 

template <typename T, typename L, typename F>
void iter(T array, L lengh, F func)
{
	L	ind;

	ind = 0;
	while (ind < lengh)
	{
		func(array[ind]);
		ind++;
	}
}

#endif