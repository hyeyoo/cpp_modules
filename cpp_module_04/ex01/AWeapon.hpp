/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:41:20 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:53:36 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{

protected:
	std::string name;
	int			apcost;	
	int			damage;

	AWeapon(void);

public:
	virtual ~AWeapon(void);
	AWeapon(const AWeapon &aweapon);
	AWeapon				&operator=(const AWeapon &aweapon);

	AWeapon(std::string const &name, int apcost, int damage);
	const std::string 	&getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;
	virtual void		attack(void) const = 0;

};

#endif
