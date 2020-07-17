/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:17:27 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:38:01 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

/*
** Allocate Zombie in the stack automatically delete them when ZombieHorde is Destroyed
*/

ZombieHorde::ZombieHorde(int n)
{
	this->zombies = new Zombie[n];	
	std::string	names[4] = {"Didier", "Georges", "Michel", "David"};

	srand((unsigned) time(0));
	this->nb = 0;
	while (this->nb < n)
	{
		this->zombies[this->nb].setName(names[std::rand() % 4]);
		this->zombies[this->nb++].setType("cool");
	}
	return ;
}

void		ZombieHorde::announce()
{
	int		i;

	i = 0;
	while (i < this->nb)
		this->zombies[i++].announce();
	return ;
}
