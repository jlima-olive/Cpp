/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:56:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 19:49:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <AForm.hpp>
#include <cstdlib> 
#include <ctime> 
#include <iostream>

class RobotomyRequestForm : public AForm
{
protected:
	int execute_func() const;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
	RobotomyRequestForm(RobotomyRequestForm &obj);
};

#endif