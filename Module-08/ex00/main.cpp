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
	std::vector<int> var;

	for (int ind = 0; ind < 51; ind++)
		var.push_back(ind);
	try
	{
		std::cout << "try one\n";
		easyfind(var, 50);
		std::cout << "try two\n";
		easyfind(var, 51);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}




	std::deque<int> var1;

	for (int ind = 0; ind < 51; ind++)
		var.push_back(ind);
	try
	{
		std::cout << "try one\n";
		easyfind(var, 50);
		std::cout << "try two\n";
		easyfind(var, 51);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::list<int> var2;

	for (int ind = 0; ind < 51; ind++)
		var.push_back(ind);
	try
	{
		std::cout << "try one\n";
		easyfind(var, 50);
		std::cout << "try two\n";
		easyfind(var, 51);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}