/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:48:46 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:32:20 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure::Cure(const Cure &cure)
{
	*this = cure;
	return ;
}

Cure			&Cure::operator=(const Cure &cure)
{
	this->_type = "cure";
	this->_xp = cure._xp;
	return (*this);
}

AMateria		*Cure::clone(void) const
{
	return (new Cure());
}

void			Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
	return ;
}
