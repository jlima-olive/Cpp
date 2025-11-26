/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:32:18 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 12:42:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		PresidentialPardonForm f1("name1");
		RobotomyRequestForm f2("name2");
		ShrubberyCreationForm f3("name3");
		Bureaucrat b1("bureau1", 1);
		Bureaucrat b2("bureau2", 75);
		Bureaucrat b3("bureau3", 150);
		
		// b1.executeForm(f3);
		b3.signForm(f3);
		f3.execute(b3);
		// f1.beSigned(b1);
		// f2.beSigned(b1);
		// f3.beSigned(b1);
// 
		// 
		// f1.beSigned(b2);
		// f2.beSigned(b2);
		// f3.beSigned(b2); //exception
		// 
		// f1.beSigned(b3);
		// f2.beSigned(b3); //exception
		// f3.beSigned(b3); //exception
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