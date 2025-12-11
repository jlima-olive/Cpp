/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:20:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/11 21:20:33 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

#include <iostream>
#include <string>
#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

class Intern
{
public:
	Intern();
	Intern(Intern &obj);
	Intern &operator=(Intern &obj);
	~Intern();
	AForm *makeForm(const std::string &form, const std::string &target) const;
};

#endif