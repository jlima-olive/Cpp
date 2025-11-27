/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:07:52 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 17:44:25 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_TPP
# define FUNCS_TPP

# include <iostream> 

template <typename T>
void swap(T &var1, T &var2)
{
	T temp;
	
	temp = var1;
	var1 = var2;
	var2 = temp;
}

template <typename T>
T max(T &var1, T &var2)
{
	if (var1 > var2)
		return (var1);
	else
		return (var2);
}

template <typename T>
T min(T &var1, T &var2)
{
	if (var1 < var2)
		return (var1);
	else
		return (var2);
}

#endif