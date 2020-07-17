/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:38:17 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:47:42 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

void		HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << (*this->weapon).getType() << std::endl;
	return ;
}

/*
** HumanB get setWeapon so if it can reassign his weapon
** we cannot save it as a pointer
*/

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}
