/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:20:13 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:18:47 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{

protected:
	std::string				_type;
	unsigned int			_xp;

	AMateria(void);

public:
	virtual ~AMateria(void);
	AMateria(const AMateria &amateria);
	AMateria				&operator=(const AMateria &amateria);

	AMateria(std::string const &type);
	std::string const		&getType(void) const; // Returns the materia type
	unsigned int			getXP(void) const; // Returns the Materia's XP
	
	virtual AMateria		*clone(void) const = 0;
	virtual void			use(ICharacter &target);

};

#endif
