/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:56:54 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:20:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{

private:
	std::string	name;
	AMateria	*materias[4];

	Character(void);

public:
	~Character(void);
	Character(const Character &character);
	Character			&operator=(const Character &character);

	Character(std::string name);
	std::string const	&getName(void) const;
	void 				equip(AMateria *m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter &target);

};

#endif
