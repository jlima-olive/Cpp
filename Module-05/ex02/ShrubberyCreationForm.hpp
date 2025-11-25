/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:56:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 19:59:51 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm
{
protected:
	void execute_func(std::string str) const;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
	void	execute(Bureaucrat const &executor);
};
