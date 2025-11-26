/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:01:59 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 19:49:47 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("Robot", "RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) :
AForm(name, "RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm argument constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) :
AForm(obj)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return (obj);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

int RobotomyRequestForm::execute_func() const
{
    srand((unsigned)time(0)); 
	if (rand() % 10 + 1 > 5)
	{
		std::cout << getTarget() << " could not be robotomized" << std::endl;
		return (0);
	}
	std::cout << "* drilling noises *" << std::endl
			  << getTarget() << " was robotomized" << std::endl;
	return (1);
}
