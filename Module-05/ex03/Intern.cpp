/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:00:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 13:15:06 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>

Intern::Intern()
{
	std::cout << "Inter default constructor called" << std::endl;
}

Intern::Intern(Intern &obj)
{
	std::cout << "Inter copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern &obj)
{
	std::cout << "Inter copy assignment operator called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Inter destructor called" << std::endl;
}

AForm *Intern::makeForm(const std::string &form, const std::string &target) const
{
	if (form == "PresidentialPardonForm")
	{
		std::cout << "Inter created a PresidentialPardonForm" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	if (form == "ShrubberyCreationForm")
	{
		std::cout << "Inter created a ShrubberyCreationForm" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	if (form == "RobotomyRequestForm")
	{
		std::cout << "Inter created a RobotomyRequestForm" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	std::cout << "The Inter couldnt find that specific form, maybe we should pay him even less??" << std::endl;
}

