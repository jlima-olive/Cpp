/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:48:50 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 22:27:23 by jlima-so         ###   ########.fr       */
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
	if (obj.getGrade() > grade)
	{
		std::cout << obj.getName() << " couldn't sign " << name
				  << " because the Bureaucrats grading is too low" << std::endl;
		throw (GradeTooLowException());
	}
	std::cout << obj.getName() << " signed " << name << std::endl;
	sign = true;
}

Form::Form() :
name("Form"),
sign(false),
grade(100)
{}

Form::Form(std::string new_name, int grade) :
name(new_name),
sign(false),
grade(grade * (grade < 151 && grade > 0) + 100 * !(grade < 151 && grade > 0))
{
	handle_exception(grade);
}

Form::Form(Form &obj) :
name(obj.name),
sign(obj.sign),
grade(obj.grade)
{}

Form	&Form::operator=(const Form &obj)
{
	*this = obj;
	return (*this);
}

Form::~Form()
{}

void Form::handle_exception(int new_grade)
{
	if (new_grade > 150)
		throw (GradeTooLowException());
	if (new_grade < 1)
		throw (GradeTooHighException());
}