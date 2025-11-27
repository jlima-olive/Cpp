/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:12:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 00:16:51 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.tpp>

int main()
{
	std::stack<int> stack;

	for (int ind = 0; ind < 51; ind++)
		stack.push(ind);
	easyfind(stack, 50);
	try
	{
		easyfind(stack, 51);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}