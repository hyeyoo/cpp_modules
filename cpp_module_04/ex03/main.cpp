/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 00:58:03 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 02:28:19 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int			main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	std::cout << "I am " << me->getName() << std::endl;
	
	AMateria* mat1;
	mat1 = src->createMateria("ice");
	std::cout << "Materia " << mat1->getType() << " with " << mat1->getXP();
	std::cout << " XP" << std::endl;
	me->equip(mat1);
	AMateria* tmp;
	tmp = src->createMateria("cure");
	std::cout << "Materia " << tmp->getType() << " with " << tmp->getXP();
	std::cout << " XP" << std::endl;
	me->equip(tmp);

	tmp = src->createMateria("cure");
	delete(tmp);
	std::cout << tmp << std::endl;
	tmp = src->createMateria("truc");
	std::cout << tmp << std::endl;
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	std::cout << "Materia " << mat1->getType() << " with " << mat1->getXP();
	std::cout << " XP" << std::endl;
	me->use(1, *bob);
	me->unequip(1);

	// Not printing anything because doesn't exist anymore
	me->use(1, *bob);
	me->use(5, *bob); // 4 max
	
	delete(bob);
	delete(me);
	delete(src);
	
	return (0);
}
