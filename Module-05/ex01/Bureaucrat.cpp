/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:28:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 21:28:29 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

const std::string &Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::getGrade()
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
	return ("Grade cannot go bellow 1");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot go above 150");
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
	handle_exception(grade + 1);
	grade++;
}

void Bureaucrat::downtGrade()
{
	handle_exception(grade - 1);
	grade--;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
	return (out);
}
