/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:48:50 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/15 16:44:31 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int Form::getGrade()
{
	return (grade);
}

const std::string Form::getName()
{
	return (name);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > grade && sign == false)
	{
		std::cout << obj.getName() << " couldn't sign " << name
				  << " because the Bureaucrats grading is too low" << std::endl;
		throw GradeTooLowException();
	}
	sign = true;
	std::cout << obj.getName() << " signed " << name << std::endl;
}

Form::Form() :
name("Form"),
sign(false),
grade(100)
{
	std::cout << "Form default constructor called" << std::endl;	
}

Form::Form(std::string new_name, int grade) :
name(new_name),
sign(false),
grade(grade * (grade < 151 && grade > 0) + 100 * !(grade < 151 && grade > 0))
{
	std::cout << "Form argument constructor called" << std::endl;	
	handle_exception(grade);
}

Form::Form(Form &obj) :
name(obj.name),
sign(obj.sign),
grade(obj.grade)
{
	std::cout << "Form copy constructor called" << std::endl;	
}

Form	&Form::operator=(const Form &obj)
{
	std::cout << "Bureaucrat copy asignment operator called" << std::endl;	
	return (*(new Form(obj.name, obj.grade)));
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