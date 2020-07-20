/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:20:07 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:51:32 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
};

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", ";
	std::cout << "is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	*this = sorcerer;
	return ;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", ";
	std::cout << "is born!" << std::endl;
	return ;
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	return (victim.getPolymorphed());
}

void				Sorcerer::polymorph(Peon const &victim) const
{
	return (victim.getPolymorphed());
}

const std::string	&Sorcerer::getName(void) const
{
	return (this->name);
}

const std::string	&Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream		&operator<<(std::ostream &os,
const Sorcerer &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", ";
	os << "and I like ponies!" << std::endl;
	return (os);
}
