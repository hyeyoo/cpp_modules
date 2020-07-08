/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:21:47 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 01:37:44 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy::Enemy(const Enemy &enemy)
{
	*this = enemy;
	return ;
}

Enemy					&Enemy::operator=(const Enemy &enemy)
{
	this->hp = enemy.hp;
	this->type = enemy.type;
	return (*this);
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
	return ;
}

std::string				Enemy::getType(void) const
{
	return (this->type);
}

int						Enemy::getHP(void) const
{
	return (this->hp);
}

void					Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (damage > hp)
			damage = hp;
		hp -= damage;
	}
	return ;
}
