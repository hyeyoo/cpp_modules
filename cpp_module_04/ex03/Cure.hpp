/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:46:46 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 23:48:33 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{

private:


public:
	Cure(void);
	~Cure(void);
	Cure(const Cure &cure);
	Cure			&operator=(const Cure &cure);

	AMateria		*clone(void) const;
	void			use(ICharacter &target);

};

#endif
