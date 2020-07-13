/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:35:24 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/14 00:07:31 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("undefined", 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
: Form(form)
{
	*this = form;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=
(const ShrubberyCreationForm &form)
{
	(void)form;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm
(std::string target): Form(target, 145, 137)
{
	return ;
}

void					ShrubberyCreationForm::execute
(Bureaucrat const &executor) const
{
	std::ofstream outfile;	

	Form::execute(executor);
	outfile.open(this->getName() + "_shrubbery",
std::ofstream::out | std::ofstream::trunc);
	if (outfile.fail())
		std::cerr << "Error: " << strerror(errno) << std::endl;
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
