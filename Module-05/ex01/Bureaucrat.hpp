/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:20:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 20:53:53 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
public:
	Bureaucrat();
	Bureaucrat(std::string str, int new_grade);
	Bureaucrat(Bureaucrat &obj);
	~Bureaucrat();
	void	handle_exception(int new_grade);
	Bureaucrat	&operator=(Bureaucrat &obj);
	int		getGrade();
	void	setGrade(int gr);
	const std::string	&getName();
	void	upGrade();
	void	downtGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
