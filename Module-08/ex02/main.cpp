/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:35:58 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/27 18:55:47 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <list>

int main(void)
{
	MutantStack<int> var;
	MutantStack<int>::iterator it;

	it.
	for (int ind = 0; ind <= 10; ind++)
		var.push(ind);
	// var.at();
	std::cout << "The insides are: " << var.top() << std::endl;
}