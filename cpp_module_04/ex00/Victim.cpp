/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:52:59 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 00:30:56 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name;
	std::cout << " died for no apparent reasons!" << std::endl;
	return ;
}

Victim::Victim(const Victim &victim)
{
	*this = victim;
	return ;
}

Victim				&Victim::operator=(const Victim &victim)
{
	this->name = victim.name;
	return (*this);
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "A random victim called " << this->name << " just appeared!";
	std::cout << std::endl;
	return ;
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed in a cute little sheep!";
	std::cout << std::endl;
	return ;
}

std::string			Victim::getName(void) const
{
	return (this->name);
}

std::ostream		&operator<<(std::ostream &os, const Victim &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (os);	
}
