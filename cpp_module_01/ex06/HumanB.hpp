/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:20:51 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:47:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB
{

private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string name);
	void		attack(void);
	void		setWeapon(Weapon &weapon);

};

#endif
