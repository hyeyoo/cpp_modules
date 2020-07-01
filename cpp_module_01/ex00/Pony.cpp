/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 03:54:42 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 11:17:21 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "new Pony" << std::endl;
	this->color = "White";
	return ;
}

Pony::~Pony(void)
{
	std::cout << "deleting Pony" << std::endl;
	return ;
}

void		Pony::walk(void)
{
	std::cout << "walk" << std::endl;
	return ;
}

void		Pony::jump(void)
{
	std::cout << "jump" << std::endl;
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
