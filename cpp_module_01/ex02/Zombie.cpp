/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:26:26 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:02:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n, std::string t)
{
	this->name = n;
	this->type = t;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
	return ;
}
