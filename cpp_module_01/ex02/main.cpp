/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:51:38 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:03:08 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

/*
** Allocated on the heap because ZombieEvent::randomChump() and
** ZombieEvent::newZombie returns a (Zombie *)
*/

int			main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	ZombieEvent	event;

	zombie1 = event.randomChump();
	zombie1->announce();
	delete (zombie1);
	event.setZombieType("not cool");
	zombie2 = event.newZombie("Hugo");
	zombie2->announce();
	delete (zombie2);
	return (0);
}
