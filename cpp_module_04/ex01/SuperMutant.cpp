/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:39:04 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 02:07:26 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &super)
{
	*this = super;
	std::cout << "Gaaah. Break everything !" << std::endl;
	return ;
}

SuperMutant				&SuperMutant::operator=(const SuperMutant &super)
{
	this->hp = super.hp;
	this->type = super.type;
	return (*this);
}

void					SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	return ;
}
