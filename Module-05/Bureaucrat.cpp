#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string new_name, int new_grade) :
name(new_name)
{
	check_exception(new_grade);
	grade = new_grade;
	std::cout << "Bureaucrat argument constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
	check_exception(obj.getGrade());
	grade = obj.getGrade();
	std::cout << "Bureaucrat copy constructor called" << std::endl;	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;	
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &obj)
{
	check_exception(obj.getGrade());
	grade = obj.getGrade();
	std::cout << "Bureaucrat copy asignment operator called" << std::endl;	
	return (*this);
}

std::string Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::getGrade()
{
	return (grade);
}

// const char	*Bureaucrat::GradeTooHighException::what() const noexcept
// {
// 	return ("Grade cannot go above 1");
// }

// const char	*Bureaucrat::GradeTooLowException::what() const noexcept
// {
// 	return ("Grade cannot go bellow 1");
// }

void Bureaucrat::setGrade(int new_grade)
{
	check_exception(new_grade);
	grade = new_grade;
}

void Bureaucrat::check_exception(int new_grade)
{
	if (new_grade > 150)
		throw (GradeTooLowException());
	if (new_grade < 1)
		throw (GradeTooHighException());
}

void Bureaucrat::upGrade()
{
	check_exception(grade + 1);
	grade++;
}

void Bureaucrat::downtGrade()
{
	check_exception(grade - 1);
	grade--;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getName() << '.';
	return (out);
}
