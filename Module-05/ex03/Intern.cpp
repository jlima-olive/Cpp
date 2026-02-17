/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:00:24 by jlima-so          #+#    #+#             */
/*   Updated: 2026/01/07 14:54:41 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern &obj)
{
	(void)obj;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern &obj)
{
	(void)obj;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm *Intern::makeForm(const std::string &form, const std::string &target) const
{
	std::string str[3] =  { "PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm" };
	int	ind = 0;
	
	while (ind < 3 && form != str[ind])
		ind++;
	switch (ind)
	{
		case 0:
			std::cout << "Intern created a PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Intern created a ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 2:
			std::cout << "Intern created a RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		default :
			std::cout << "The Intern couldnt find that specific form, maybe we should pay him even less??" << std::endl;
			throw (randomException());
	}
}

const char	*Intern::randomException::what() const throw()
{
	return ("this is a Random Exception");
}
