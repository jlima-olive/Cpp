/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:34:41 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/11 18:39:07 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			exec_grade;
public:
	int		getGrade();
	const std::string getName();
	void	beSigned(Bureaucrat &obj);
	Form();
	Form(std::string new_name, int sign_grade, int exec_grade);
	Form(Form &obj);
	Form &operator=(Form &obj);
	~Form();
	void	handle_exception(int new_grade);
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif