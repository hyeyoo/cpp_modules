/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:20:16 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 02:26:52 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria::AMateria(const AMateria &amateria)
{
	*this = amateria;
	return ;
}

AMateria				&AMateria::operator=(const AMateria &amateria)
{
	this->_type = amateria._type;
	this->_xp = amateria._xp;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
	return ;
}

std::string const		&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int			AMateria::getXP(void) const
{
	return (this->_xp);
}

void					AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	(void)target;
	return ;
}
