/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:56:22 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 02:10:03 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &terminator)
{
	*this = terminator;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &t)
{
	(void)t;
	return (*this);
}	

ISpaceMarine			*AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void					AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void					AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void					AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}
