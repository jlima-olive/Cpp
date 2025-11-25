/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:01:59 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/25 23:04:57 by jlima-so         ###   ########.fr       */
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

std::ostream &ShrubberyCreationForm::plant_tree(std::ostream &out) const
{
	out << "" << std::endl <<
	CM_FOREGROUND_GREEN << "                                 &&         &%  &%#                              " << std::endl << 
	CM_FOREGROUND_GREEN << "                                  &|       %@%&@&@                               " << std::endl << 
	CM_FOREGROUND_GREEN << "                           @&## &@&:      #&%%;&#%&@&@                           " << std::endl << 
	CM_FOREGROUND_GREEN << "                     && @#%\\@#@@%@% \\___; |%%&#%@%##@%@                        " << std::endl << 
	CM_FOREGROUND_GREEN << "                     % @ %#%@\\&@#&@ &#   \\&  @|%#&%@%  @                       " << std::endl << 
	CM_FOREGROUND_GREEN << "                  &&&&##%#@#=  @ @&%#%     \\ /### &&#%@#                        " << std::endl << 
	CM_FOREGROUND_GREEN << "                 &    #&&&%@ \\|%#&=@#@%#   :_:%@&#@%#&&@%                       " << std::endl << 
	CM_FOREGROUND_GREEN << "                %     %@%& @  &%   #&%&    ~    #@@#%&%&#@&                      " << std::endl << 
	CM_FOREGROUND_GREEN << "             %%#%&&  #@/_&_;_\\~     @  #   =|  % @%##%##@ &                     " << std::endl << 
	CM_FOREGROUND_GREEN << "            # &:&%%@@~        |\\           |_:;|&\\&  @@&@#&@                   " << std::endl << 
	CM_FOREGROUND_GREEN << "         #@   &%%%@@      ://_;~\\_____    ///   &#@#&#&%#@                      " << std::endl << 
	CM_FOREGROUND_GREEN << "        &@#@   #@@$_&@__//            \\  ;    @#@&&@&&@##%#@                    " << std::endl << 
	CM_FOREGROUND_GREEN << "        &%   %@=//;_ : /               =\\      %& @@@@&&&  @                    " << std::endl << 
	CM_FOREGROUND_GREEN << "               @                         ~    &  @   %  %                        " << std::endl << 
	CM_FOREGROUND_GREEN << "                                          \\                                     " << std::endl << 
	CM_FOREGROUND_GREEN << "                                          =|\\                                   " << std::endl << 
	CM_FOREGROUND_GREEN << "                                          ||      _~___;                         " << std::endl << 
	CM_FOREGROUND_GREEN << "                                          ||  __~_      _~__\\                   " << std::endl << 
	CM_FOREGROUND_GREEN << "                                          ____               \\                  " << std::endl << 
	CM_FOREGROUND_GREEN << "                                         ~|                    \\                " << std::endl << 
	CM_FOREGROUND_GREEN << "                                         ||               %&    |                " << std::endl << 
	CM_FOREGROUND_GREEN << "                                         ||            @%#_&    /    %           " << std::endl << 
	CM_FOREGROUND_GREEN << "                            \\_______.-./||\\._________/    @~&~~~   @##@&%      " << std::endl << 
	CM_FOREGROUND_GREEN << "                             \\                      /    @@@@/#&%|@&#@%#        " << std::endl << 
	CM_FOREGROUND_GREEN << "                              \\____________________/    &&&%@%###~%&/&&         " << std::endl << 
	CM_FOREGROUND_GREEN << "                                                          @#&&&@@@&##%@%         " << std::endl << 
	CM_FOREGROUND_GREEN << "                                                           %&  %&@&%&#%#@        " << std::endl << 
	CM_FOREGROUND_WHITE << "                                                                                 " << std::endl;
	return (out);
}

int ShrubberyCreationForm::execute_func() const
{
	std::string filename;

	filename = getName() + "_shrubbery"; 

	std::ofstream outfile(filename);
	if (!outfile.is_open())
	{
		std::cout << "Could't open " << filename << std::endl;
		return (0);
	}
	plant_tree(outfile);
	return (1);
}

