/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:11:11 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 00:28:21 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void): Victim()
{
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon(const Peon &peon)
{
	*this = peon;
	return ;
}

Peon				&Peon::operator=(const Peon &peon)
{
	this->name = peon.name;
	return (*this);
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

void				Peon::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed into a pink pony!";
	std::cout << std::endl;
	return ;
}
