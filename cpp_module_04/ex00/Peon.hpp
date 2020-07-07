/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 00:11:08 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 00:19:19 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{

private:
	Peon(void);

public:
	~Peon(void);
	Peon(const Peon &peon);
	Peon		&operator=(const Peon &peon);

	Peon(std::string name);
	void		getPolymorphed(void) const;
};

#endif
