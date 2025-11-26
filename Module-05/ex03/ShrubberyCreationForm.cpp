/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42lisba.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:01:59 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 12:29:47 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("tree", "ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) :
AForm(name, "ShrubberyCreationForm", 145, 137)
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
	out << "" << std::endl << CM_FOREGROUND_GREEN <<
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
	return (out);
}

int ShrubberyCreationForm::execute_func() const
{
	std::string filename;

	filename = getTarget() + "_shrubbery"; 

	std::ofstream outfile(filename.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Could't open " << filename << std::endl;
		return (0);
	}
	plant_tree(outfile);
	return (1);
}

