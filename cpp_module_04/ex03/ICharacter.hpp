/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:55:24 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:17:39 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{

public:
	virtual ~ICharacter(void) {}
	virtual std::string const		&getName(void) const = 0;
	virtual void					equip(AMateria *m) = 0;
	virtual void					unequip(int idx) = 0;
	virtual void					use(int idx, ICharacter &target) = 0;

};

#endif
