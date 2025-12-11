/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:28:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/11 18:32:38 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string str, int new_grade) :
name(str)
{
	handle_exception(new_grade);
	grade = new_grade;
	std::cout << "Bureaucrat argument constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat() :
name("Bureaucrat")
{
	grade = 100;
	std::cout << "Bureaucrat default constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
	handle_exception(obj.getGrade());
	grade = obj.getGrade();
	std::cout << "Bureaucrat copy constructor called" << std::endl;	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;	
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &obj)
{
	handle_exception(obj.getGrade());
	grade = obj.getGrade();
	std::cout << "Bureaucrat copy asignment operator called" << std::endl;	
	return (*this);
}

void	Bureaucrat::executeForm(const AForm & form) const
{
	form.execute(*this);
}

const std::string &Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::setGrade(int new_grade)
{
	handle_exception(new_grade);
	grade = new_grade;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
}

void Bureaucrat::handle_exception(int new_grade)
{
	if (new_grade > 150)
		throw (GradeTooLowException());
	if (new_grade < 1)
		throw (GradeTooHighException());
}

void Bureaucrat::upGrade()
{
	handle_exception(grade - 1);
	grade--;
}

void Bureaucrat::downGrade()
{
	handle_exception(grade + 1);
	grade++;
}

void	Bureaucrat::signForm(AForm &obj)
{
	obj.beSigned((*this));
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
	return (out);
}
