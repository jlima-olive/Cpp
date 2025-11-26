/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:20:45 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 13:11:08 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

#include <iostream>
#include <string>
#include <AForm.hpp>

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