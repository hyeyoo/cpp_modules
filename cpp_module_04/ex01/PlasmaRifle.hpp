/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:00:07 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 01:10:42 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{

private:


public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &plasma);
	PlasmaRifle			&operator=(const PlasmaRifle &plasma);

	void				attack(void) const;
};

#endif
