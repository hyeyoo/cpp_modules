/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:44:05 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 23:17:01 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle !" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &marine)
{
	*this = marine;
	return ;
}

TacticalMarine			&TacticalMarine::operator=(const TacticalMarine &marine)
{
	return (*this);
}

ISpaceMarine			*TacticalMarine::clone(void) const
{
	return (new TacticalMarine(*this));
}

void					TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl;
	return ;
}

void					TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void					TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}
