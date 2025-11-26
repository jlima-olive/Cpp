/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:48:50 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/21 13:21:33 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int AForm::getGrade() const
{
	return (sign_grade);
}

const std::string AForm::getTarget() const
{
	return (target);
}

const std::string AForm::getName() const
{
	return (name);
}

void AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > sign_grade && sign == false)
	{
		std::cout << obj.getName() << " couldn't sign " << name
				  << " because the Bureaucrats grading is too low" << std::endl;
		throw (Bureaucrat::GradeTooLowException());
	}
	if (sign == false)
	{
		sign = true;
		std::cout << obj.getName() << " signed " << name << std::endl;
	}
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGrade() || sign == false)
	{
		std::cout << executor.getName() << " couldn't execute " << getName() << std::endl;
		if (sign == true && executor.getGrade() > getGrade())
			throw (Bureaucrat::GradeTooLowException());
	}
	else if (execute_func())
		std::cout << executor.getName() << " executed " << getName() << std::endl;
}

int AForm::execute_func(void) const
{
	return (1);
}

AForm::AForm() :
target("target"),
name("AForm"),
sign(false),
sign_grade(100),
exec_grade(75)
{
	std::cout << "AForm default constructor called" << std::endl;	
}

AForm::AForm(std::string new_target, std::string new_name, int sign_grade, int exec_grade) :
target(new_target),
name(new_name),
sign(false),
sign_grade(sign_grade * (sign_grade < 151 && sign_grade > 0) + 100 * !(sign_grade < 151 && sign_grade > 0)),
exec_grade(exec_grade * (exec_grade < 151 && exec_grade > 0) + 75 * !(exec_grade < 151 && exec_grade > 0))
{
	handle_exception(sign_grade);
	handle_exception(exec_grade);
	std::cout << "AForm argument constructor called" << std::endl;	
	handle_exception(sign_grade);
}

AForm::AForm(AForm &obj) :
target(obj.target),
name(obj.name),
sign(obj.sign),
sign_grade(obj.sign_grade),
exec_grade(obj.exec_grade)
{
	std::cout << "AForm copy constructor called" << std::endl;	
}

AForm	&AForm::operator=(AForm &obj)
{
	std::cout << "AForm copy asignment operator called" << std::endl;	
	return (obj);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;	
}

void AForm::handle_exception(const int new_grade) const
{
	if (new_grade > 150)
		throw GradeTooLowException();
	if (new_grade < 1)
		throw GradeTooHighException();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}