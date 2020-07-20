/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 02:57:01 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:41:00 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int			main(void)
{
	Character* me = new Character("me");
	
	std::cout << *me;
	
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	delete(me);
	delete(a);
	// Don't delete b because already deleted because of attack
	delete(pr);
	delete(pf);

	return (0);
}
