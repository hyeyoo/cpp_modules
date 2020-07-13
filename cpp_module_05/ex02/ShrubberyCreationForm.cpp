/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:35:24 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/13 02:47:36 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(void)
{
	return ;
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
	return ;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &form)
{
	return ;
}

ShruberryCreationForm	&ShruberryCreationForm::operator=
(const ShruberryCreationForm &form)
{
	return (*this);
}

ShruberryCreationForm::ShruberryCreationForm
(std::string target): Form(target, 145, 137)
{
	return ;
}

void					ShurberryCreationForm::action(void)
{
	std::ofstream outfile;	

	outfile.open(this.getName() + "_shrubbery",
std::ofstream::out | std::ofstream::trunc);
	if (outfile.fail())
		cerr << "Error: " << strerror(errno) << std::endl;
	else
	{
		outfile << "    _\\/_" << std::endl;
		outfile << "     /\\" << std::endl;
		outfile << "     /\\" << std::endl;
		outfile << "    /  \\" << std::endl;
		outfile << "    /~~\\o" << std::endl;
		outfile << "   /o   \\" << std::endl;
		outfile << "  /~~*~~~\\" << std::endl;
		outfile << "  o/    o \\" << std::endl;
		outfile << " /~~~~~~~~\\~`" << std::endl;
		outfile << "/__*_______\\" << std::endl;
		outfile << "     ||" << std::endl;
		outfile << "   \\====/" << std::endl;
		outfile << "    \\__/" << std::endl;
		outfile.close();
	}
	return ;
}
