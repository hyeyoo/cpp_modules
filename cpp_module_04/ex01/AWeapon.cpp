/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:41:23 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:49:50 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(const AWeapon &aweapon)
{
	*this = aweapon;
	return ;
}

AWeapon				&AWeapon::operator=(const AWeapon &aweapon)
{
	this->name = aweapon.name;
	this->apcost = aweapon.apcost;
	this->damage = aweapon.damage;
	return (*this);
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
	return ;
}

const std::string	&AWeapon::getName(void) const
{
	return (this->name);
}

int					AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int					AWeapon::getDamage(void) const
{
	return (this->damage);
}
