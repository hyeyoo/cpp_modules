/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 02:15:08 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:59:09 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

private:
	std::string 			name;
	int						ap;
	AWeapon					*weapon;

	Character(void);

public:
	~Character(void);
	Character(const Character &c);
	Character				&operator=(const Character &c);

	Character(std::string const &name);
	void					recoverAP(void);
	void					equip(AWeapon *);
	void					attack(Enemy *);
	const std::string		&getName(void) const;	
	int						getAP(void) const;
	AWeapon					*getWeapon(void) const;

};

std::ostream				&operator<<(std::ostream &os, const Character &c);

#endif
