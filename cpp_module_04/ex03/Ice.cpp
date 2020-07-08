/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:38:56 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:29:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice::Ice(const Ice &ice)
{
	*this = ice;
	return ;
}

Ice			&Ice::operator=(const Ice &ice)
{
	this->_type = "ice";
	this->_xp = ice._xp;
	return (*this);
}

AMateria		*Ice::clone(void) const
{
	return (new Ice());
}

void			Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
	return ;
}
