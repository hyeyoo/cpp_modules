/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:47:01 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/13 21:23:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm
(const PresidentialPardonForm &form)
{
	return ;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=
(const PresidentialPardonForm &form)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm
(std::string target): Form(target, 25, 5)
{
	return ;
}

void						PresidentialPardonForm::execute
(Bureaucrat const &executor) const;
{
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox.";
	std::cout << std::cendl;
	return ;
}
