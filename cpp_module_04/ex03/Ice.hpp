/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:36:18 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:29:17 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{

private:


public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &ice);
	Ice				&operator=(const Ice &ice);	

	AMateria*		clone(void) const;
	void			use(ICharacter &target);

};

#endif
