/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:48:50 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/21 13:21:33 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int Form::getGrade()
{
	return (sign_grade);
}

const std::string Form::getName()
{
	return (name);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > sign_grade && sign == false)
	{
		std::cout << obj.getName() << " couldn't sign " << name
				  << " because the Bureaucrats grading is too low" << std::endl;
		throw GradeTooLowException();
	}
	if (sign == false)
	{
		sign = true;
		std::cout << obj.getName() << " signed " << name << std::endl;
	}
}

Form::Form() :
name("Form"),
sign(false),
sign_grade(100),
exec_grade(75)
{
	std::cout << "Form default constructor called" << std::endl;	
}

Form::Form(std::string new_name, int sign_grade, int exec_grade) :
name(new_name),
sign(false),
sign_grade(sign_grade * (sign_grade < 151 && sign_grade > 0) + 100 * !(sign_grade < 151 && sign_grade > 0)),
exec_grade(exec_grade * (exec_grade < 151 && exec_grade > 0) + 75 * !(exec_grade < 151 && exec_grade > 0))
{
	handle_exception(sign_grade);
	handle_exception(exec_grade);
	std::cout << "Form argument constructor called" << std::endl;	
	handle_exception(sign_grade);
}

Form::Form(Form &obj) :
name(obj.name),
sign(obj.sign),
sign_grade(obj.sign_grade),
exec_grade(obj.exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;	
}

Form	&Form::operator=(Form &obj)
{
	std::cout << "Bureaucrat copy asignment operator called" << std::endl;	
	return (obj);
}

Form::~Form()
{}

void Form::handle_exception(int new_grade)
{
	if (new_grade > 150)
		throw GradeTooLowException();
	if (new_grade < 1)
		throw GradeTooHighException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade cannot go bellow 1");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade cannot go bellow 1");
}