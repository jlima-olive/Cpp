/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:32:18 by jlima-so          #+#    #+#             */
/*   Updated: 2025/12/11 21:16:47 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		PresidentialPardonForm prf("name1");
		RobotomyRequestForm rbf("name2");
		ShrubberyCreationForm shf("name3");
		Bureaucrat b1("bureau1", 1);
		Bureaucrat b2("bureau2", 72);
		Bureaucrat b3("bureau3", 145);
		
		// shf.beSigned(b1);
		// rbf.beSigned(b1);
		// prf.beSigned(b1);

		// shf.execute(b1);
		// rbf.execute(b1);
		// prf.execute(b1);


		
		// shf.beSigned(b2);
		// rbf.beSigned(b2);
		// prf.beSigned(b2); //exception

		// shf.execute(b2);
		// rbf.execute(b2);
		// prf.execute(b2); //exception


		
		// shf.beSigned(b3);
		// rbf.beSigned(b3); //exception
		// prf.beSigned(b3); //exception

		// shf.execute(b3);
		// rbf.execute(b3); //exception
		// prf.execute(b3);	//exception
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