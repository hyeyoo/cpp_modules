/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 03:54:42 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 04:06:58 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Hihihi i'm a new poney" << std::endl;
	this->color = "White";
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Bye bye poney" << std::endl;
	return ;
}

void		Pony::walk(void)
{
	std::cout << "The poney get up on his 2 feet and walk..?" << std::endl;
	return ;
}

void		Pony::jump(void)
{
	std::cout << "THE PONY IS JUMPING SO HIGH WTF" << std::endl;
	return ;
}

std::string Pony::getColor(void)
{
	return (this->color);
}

void		Pony::setColor(std::string c)
{
	this->color = c;
	return ;
}
