/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:56:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 23:26:57 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <AForm.hpp>
#include <fstream>
#include "colors.hpp"


class ShrubberyCreationForm : public AForm
{
protected:
	int execute_func() const;
public:
	std::ostream &plant_tree(std::ostream &out) const;
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
};

#endif