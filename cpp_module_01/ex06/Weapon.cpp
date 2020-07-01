/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:32:53 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:34:36 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

void		Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}
