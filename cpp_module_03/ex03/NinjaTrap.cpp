/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 02:13:57 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 21:53:38 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "NINJAAAAAAAAAAAAAAAAAAAAAA." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "NINJAAAAAAAAAAAAAAAAAAAAAA." << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJA DED." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap)
{
	*this = ninjaTrap;
	return ;
}

NinjaTrap			&NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{	
	this->hitPoints = ninjaTrap.hitPoints;
	this->maxHitPoints = ninjaTrap.maxHitPoints;
	this->energyPoints = ninjaTrap.energyPoints;
	this->maxEnergyPoints = ninjaTrap.maxEnergyPoints;
	this->level = ninjaTrap.level;
	this->name = ninjaTrap.name;
	this->meleeAttackDamage = ninjaTrap.meleeAttackDamage;
	this->rangedAttackDamage = ninjaTrap.rangedAttackDamage;
	this->armorDamageReduction = ninjaTrap.armorDamageReduction;
	return (*this);
}

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "Ninjaaa on CL4P-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "Ninjaaa on NINJ4-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "Ninjaaa on FR4G-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "Ninjaaa on SC4V-TP " << trap.getName() << std::endl;
	return ;
}
