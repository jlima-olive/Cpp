/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:07:52 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 17:45:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_TPP
# define FUNCS_TPP

# include <iostream> 

template <typename T, typename L, typename F>
void iter(T array, L lengh, F f)
{
	L	ind;

	ind = 0;
	while (ind < lengh)
	{
		f(array[ind]);
		ind++;
	}
}

#endif