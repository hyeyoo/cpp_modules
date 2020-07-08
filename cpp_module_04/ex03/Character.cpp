/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 00:05:12 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:30:57 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::~Character(void)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->materias[i])
			delete(this->materias[i]);
		i++;
	}
	return ;
}

Character::Character(const Character &character)
{
	*this = character;
	return ;
}

Character				&Character::operator=(const Character &character)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->materias[i])
			delete(this->materias[i]);
		i++;
	}
	this->name = character.name;
	i = 0;
	while (i < 4)
	{
		this->materias[i] = character.materias[i];
		i++;
	}
	return (*this);
}

Character::Character(std::string name)
{
	int i;

	i = 0;
	while (i < 4)
		this->materias[i++] = NULL;
	this->name = name;
	return ;
}

std::string const		&Character::getName(void) const
{
	return (this->name);
}

void					Character::equip(AMateria *m)
{
	int i;

	i = 0;
	if (m)
	{
		while (this->materias[i] && i < 4)
			i++;
		if (i < 4)
			this->materias[i] = m;
	}
	return ;
}

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->materias[idx] = NULL;
	return ;
}

void					Character::use(int idx, ICharacter &target)
{

	if (idx >= 0 && idx < 4)
	{
		if (this->materias[idx])
			this->materias[idx]->use(target);
	}
	return ;
}
