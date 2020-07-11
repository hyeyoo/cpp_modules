/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:35:24 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/11 04:41:01 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
