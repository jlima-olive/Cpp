/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:00:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/11 18:24:01 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern &obj)
{
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern &obj)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm *Intern::makeForm(const std::string &form, const std::string &target) const
{
	if (form == "PresidentialPardonForm")
	{
		std::cout << "Intern created a PresidentialPardonForm" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	if (form == "ShrubberyCreationForm")
	{
		std::cout << "Intern created a ShrubberyCreationForm" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	if (form == "RobotomyRequestForm")
	{
		std::cout << "Intern created a RobotomyRequestForm" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	std::cout << "The Intern couldnt find that specific form, maybe we should pay him even less??" << std::endl;
}

