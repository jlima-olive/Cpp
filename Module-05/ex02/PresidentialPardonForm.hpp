/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:56:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 19:49:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <AForm.hpp>

class PresidentialPardonForm : public AForm
{
protected:
	void execute_func(std::string str) const;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm &obj);
	PresidentialPardonForm(PresidentialPardonForm &obj);
	void	execute(Bureaucrat const &executor);
};

#endif