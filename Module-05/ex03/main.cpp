/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:32:18 by jlima-so          #+#    #+#             */
/*   Updated: 2026/01/07 14:55:24 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		Intern inter;
		AForm *prf;
		AForm *rbf;
		AForm *shf;
		Bureaucrat b1("bureau1", 1);
		Bureaucrat b2("bureau2", 72);
		Bureaucrat b3("bureau3", 145);
		
		prf = inter.makeForm("PresidentialPardonForm", "name1");
		rbf = inter.makeForm("RobotomyRequestForm", "name2");
		shf = inter.makeForm("ShrubberyCreationForm", "name3");

		shf->beSigned(b1);
		rbf->beSigned(b1);
		prf->beSigned(b1);

		shf->execute(b1);
		rbf->execute(b1);
		prf->execute(b1);
		
		// b2.signForm(*shf);
		// b2.signForm(*rbf);
		// b2.signForm(*prf); //exception
// 
		// b2.executeForm(*shf);
		// b2.executeForm(*rbf);
		// b2.executeForm(*prf); //exception

		// shf->beSigned(b3);
		// rbf->beSigned(b3);	//exception
		// prf->beSigned(b3);	//exception
		// shf->execute(b3);
		// rbf->execute(b3);	//exception
		// prf->execute(b3);	//exception

		// change execute to beexecuted
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "random exception??" << std::endl;
		return 0;
	}
}

// char	**split(char *str, char c)
// {
// 	char	**mat;
// 	int		ind;
// 	int		indv;

// 	if (str == NULL)
// 		return (NULL);
// 	ind = wrd_count(str, c);
// 	mat = (char **)malloc((ind + 1) * sizeof(char *));
// 	mat[ind] = NULL;
// 	indv = 0;
// 	while (*str)
// 	{
// 		while (*str == c)
// 			str++;
// 		if (*str == '\0')
// 			break ;
// 		ind = 0;
// 		while (str[ind] && str[ind] != c)
// 			ind++;
// 		mat[indv] = ft_strndup(str, ind);
// 		if (mat[indv] == NULL)
// 			return (ft_free_mat(mat), NULL);
// 		indv++;
// 		str += ind;
// 	}
// 	return (mat);
// }