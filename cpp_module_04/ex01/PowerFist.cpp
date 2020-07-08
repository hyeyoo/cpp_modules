/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:13:00 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 01:20:47 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist::PowerFist(const PowerFist &power)
{
	*this = power;
	return ;
}

PowerFist			&PowerFist::operator=(const PowerFist &power)
{
	this->name = power.name;
	this->apcost = power.apcost;
	this->damage = power.damage;
	return (*this);
}

void				PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM ! *" << std::endl;
	return ;
}
