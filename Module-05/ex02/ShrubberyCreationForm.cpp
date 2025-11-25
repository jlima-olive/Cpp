/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:01:59 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 21:23:56 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) :
AForm(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm argument constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) :
AForm(obj)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return (obj);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	execute_func("namae");
}

void ShrubberyCreationForm::execute_func(std::string str) const
{
	std::cout << "" << std::endl <<
	"                                 &&         &%  &%#                              " << std::endl << 
	"                                  &|       %@%&@&@                               " << std::endl << 
	"                           @&## &@&:      #&%%;&#%&@&@                           " << std::endl << 
	"                     && @#%\\@#@@%@% \\___; |%%&#%@%##@%@                        " << std::endl << 
	"                     % @ %#%@\\&@#&@ &#   \\&  @|%#&%@%  @                       " << std::endl << 
	"                  &&&&##%#@#=  @ @&%#%     \\ /### &&#%@#                        " << std::endl << 
	"                 &    #&&&%@ \\|%#&=@#@%#   :_:%@&#@%#&&@%                       " << std::endl << 
	"                %     %@%& @  &%   #&%&    ~    #@@#%&%&#@&                      " << std::endl << 
	"             %%#%&&  #@/_&_;_\\~     @  #   =|  % @%##%##@ &                     " << std::endl << 
	"            # &:&%%@@~        |\\           |_:;|&\\&  @@&@#&@                   " << std::endl << 
	"         #@   &%%%@@      ://_;~\\_____    ///   &#@#&#&%#@                      " << std::endl << 
	"        &@#@   #@@$_&@__//            \\  ;    @#@&&@&&@##%#@                    " << std::endl << 
	"        &%   %@=//;_ : /               =\\      %& @@@@&&&  @                    " << std::endl << 
	"               @                         ~    &  @   %  %                        " << std::endl << 
	"                                          \\                                     " << std::endl << 
	"                                          =|\\                                   " << std::endl << 
	"                                          ||      _~___;                         " << std::endl << 
	"                                          ||  __~_      _~__\\                   " << std::endl << 
	"                                          ____               \\                  " << std::endl << 
	"                                         ~|                    \\                " << std::endl << 
	"                                         ||               %&    |                " << std::endl << 
	"                                         ||            @%#_&    /    %           " << std::endl << 
	"                            \\_______.-./||\\._________/    @~&~~~   @##@&%      " << std::endl << 
	"                             \\                      /    @@@@/#&%|@&#@%#        " << std::endl << 
	"                              \\____________________/    &&&%@%###~%&/&&         " << std::endl << 
	"                                                          @#&&&@@@&##%@%         " << std::endl << 
	"                                                           %&  %&@&%&#%#@        " << std::endl << 
	"                                                                                 " << std::endl;
}
