/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:09:26 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/28 03:28:21 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <cstdlib>

class PmergeMe
{
private:
	std::stringstream	formatMat(char **mat);
public:
	PmergeMe();
	PmergeMe(char **str);
	~PmergeMe();
	PmergeMe(PmergeMe &ref);
	PmergeMe &operator=(PmergeMe &ref);
	class Error : public std::exception
	{
		virtual const char *what() const throw();
	};
};

int	jacobsthal(unsigned int n);

#endif