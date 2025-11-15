/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:20:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/15 15:35:12 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
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
	void	downGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
