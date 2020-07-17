/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:35:00 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:50:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

/*
** HumanA never reassigned his weapon so a pointer is better
*/

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	return ;
}

void		HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->weapon.getType() << std::endl;
	return ;
}
