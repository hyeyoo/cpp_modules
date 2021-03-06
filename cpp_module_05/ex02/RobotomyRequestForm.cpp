/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:42:09 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/14 00:06:57 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("undefined", 72, 45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
: Form(form)
{
	*this = form;
	return ;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=
(const RobotomyRequestForm &form)
{
	(void)form;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm
(std::string target): Form(target, 72, 45)
{
	return ;
}

void					RobotomyRequestForm::execute
(Bureaucrat const &executor) const
{

	Form::execute(executor);
	std::cout << "VRRRRRRR ";
	if (std::rand() % 2)
		std::cout << this->getName() << " has been robotomized.";
	else
		std::cout << this->getName() << " failed to get robotomized.";
	std::cout << std::endl;
	return ;
}
