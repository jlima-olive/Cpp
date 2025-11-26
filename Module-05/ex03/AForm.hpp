/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:34:41 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 18:53:29 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
class AForm
{
private:
	const std::string	target;
	const std::string	name;
	bool				sign;
	const int			sign_grade;
	const int			exec_grade;
protected:
	virtual int execute_func() const = 0;
public:
	void	execute(Bureaucrat const & executor) const;
	int		getGrade() const;
	const std::string getName() const;
	const std::string getTarget() const;
	void	beSigned(Bureaucrat &obj);
	AForm();
	AForm(std::string new_target, std::string new_name, int sign_grade, int exec_grade);
	AForm(AForm &obj);
	AForm &operator=(AForm &obj);
	~AForm();
	void	handle_exception(int new_grade) const;
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