/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 02:15:11 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 02:54:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

Character::Character(const Character &c)
{
	*this = c;
	return ;
}

Character					&Character::operator=(const Character &c)
{
	this->name = c.name;
	this->ap = c.ap;
	this->weapon = c.weapon;
	return (*this);
}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
	return ;
}

void						Character::recoverAP(void)
{
	this->ap += 10;
	return ;
}

void						Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
	return ;
}

void						Character::attack(Enemy *enemy)
{
	if (weapon && (this->ap - this->weapon->getAPCost()) >= 0)
	{
		std::cout << this->name << " attacks " << enemy->getType();
		std::cout << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (!enemy->getHP())
			delete(enemy);
		this->ap -= this->weapon->getAPCost();
	}
	return ;
}

std::string					Character::getName(void) const
{
	return (this->name);
}

int							Character::getAP(void) const
{
	return (this->ap);
}

AWeapon						*Character::getWeapon(void) const
{
	return (this->weapon);
}

std::ostream				&operator<<(std::ostream &os, const Character &c)
{
	os << c.getName() << " has " << c.getAP() << " AP and ";
	if (c.getWeapon())
		os << "wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}
