/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:12:58 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 01:21:11 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{

private:


public:
	PowerFist(void);
	~PowerFist(void);
	PowerFist(const PowerFist &power);
	PowerFist			&operator=(const PowerFist &power);
	void				attack(void) const;

};

#endif
