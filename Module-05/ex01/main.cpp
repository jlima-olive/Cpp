/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:32:18 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/15 16:45:28 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	try
	{
		Form f("Jao", 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return 0;
	}
	catch (...)
	{
		std::cout << "random exception??" << std::endl;
		return 0;
	}
	std::cout << "no exception detected" << std::endl;
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