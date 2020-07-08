/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 02:07:55 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 02:14:08 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion &rad)
{
	*this = rad;
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion				&RadScorpion::operator=(const RadScorpion &rad)
{
	this->hp = rad.hp;
	this->type = rad.type;
	return (*this);
}
