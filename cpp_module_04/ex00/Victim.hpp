/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:37:51 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 12:10:51 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

protected:
	std::string name;

	Victim(void);

public:
	virtual ~Victim(void);
	Victim(const Victim &victim);
	Victim			&operator=(const Victim &victim);

	Victim(std::string name);
	void			getPolymorphed(void) const;
	std::string		getName(void) const;	

};

std::ostream		&operator<<(std::ostream &os, const Victim &victim);

#endif
