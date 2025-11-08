/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:20:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/08 18:26:01 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Bureaucrat
{
private:
	const std::string	name/*  = "Bureaucrat" */;
	int					grade;
public:
	class GradeTooHighException : public std::exception
	{
		// virtual const char	*what() const noexcept;
	};
	class GradeTooLowException : public std::exception
	{
		// virtual const char	*what() const noexcept;
	};
	Bureaucrat();
	void	check_exception(int new_grade);
	Bureaucrat(std::string new_name, int new_grade);
	Bureaucrat(Bureaucrat &obj);
	~Bureaucrat();
	Bureaucrat	&operator=(Bureaucrat &obj);
	std::string getName();
	void upGrade();
	void downtGrade();
	int getGrade();
	void setGrade(int gr);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);

// Bureaucrat::GradeTooLowException;