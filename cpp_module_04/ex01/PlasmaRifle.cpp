/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:00:16 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 01:12:32 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasma)
{
	*this = plasma;
	return ;
}

PlasmaRifle				&PlasmaRifle::operator=(const PlasmaRifle &plasma)
{
	this->name = plasma.name;
	this->apcost = plasma.apcost;
	this->damage = plasma.damage;
	return (*this);
}

void					PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
