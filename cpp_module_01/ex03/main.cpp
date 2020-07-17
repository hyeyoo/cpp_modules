/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:51:38 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:38:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int			main(void)
{
	ZombieHorde horde = ZombieHorde(20);

	std::cout << "horde.announce():" << std::endl;
	horde.announce();
	return (0);
}
