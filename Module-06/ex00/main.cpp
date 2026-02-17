/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:33:30 by jlima-so          #+#    #+#             */
/*   Updated: 2026/02/17 16:37:49 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main()
{
	std::string str1 = " 0f";
	std::string str2 = "  f42.";
	std::string str3 = "  42.1";
	std::string str4 = "  42.f";
	std::string str5 = " 42.0f";
	std::string str6 = "  nan";
	std::string str7 = "  nanf";
	std::string str8 = "         -67.67";
	std::string str9 = "inf";
	std::string str10 = "-inf";
	std::string str11 = "+inff";

	std::cout << "str1: " << '\'' << str1 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str1);
	std::cout << "\n\n\n";
	
	std::cout << "str2: " << '\'' << str2 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str2);
	std::cout << "\n\n\n";
	
	std::cout << "str3: " << '\'' << str3 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str3);
	std::cout << "\n\n\n";
	
	std::cout << "str4: " << '\'' << str4 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str4);
	std::cout << "\n\n\n";
	
	std::cout << "str5: " << '\'' << str5 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str5);
	std::cout << "\n\n\n";
	
	std::cout << "str6: " << '\'' << str6 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str6);
	std::cout << "\n\n\n";
	
	std::cout << "str7: " << '\'' << str7 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str7);
	std::cout << "\n\n\n";
	
	std::cout << "str8: " << '\'' << str8 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str8);
	std::cout << "\n\n\n";
	
	std::cout << "str9: " << '\'' << str9 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str9);
	std::cout << "\n\n\n";
	
	std::cout << "str10: " << '\'' << str10 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str10);
	std::cout << "\n\n\n";
	
	std::cout << "str11: " << '\'' << str11 << '\'' << std::endl << std::endl;
	ScalarConverter::convert(str11);
	std::cout << "\n\n\n";

	
}
