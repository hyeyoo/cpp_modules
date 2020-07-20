/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:06:42 by lmartin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/07/20 11:46:12 by lmartin          ###   ########.fr       */
=======
/*   Updated: 2020/07/20 01:50:19 by lmartin          ###   ########.fr       */
>>>>>>> 3270c233b0e10d8d512b210ede14465f8916ffa4
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{

private:
	std::string name;
	std::string title;

	Sorcerer(void);

public:
	~Sorcerer(void);
	Sorcerer(const Sorcerer &sorcerer);
	Sorcerer		&operator=(const Sorcerer &sorcerer);

	Sorcerer(std::string name, std::string title);
<<<<<<< HEAD
	void			polymorph(Victim const &victim) const;
	std::string		getName(void) const;
	std::string		getTitle(void) const;
=======
	void					polymorph(Victim const &victim) const;
	void					polymorph(Peon const &victim) const;
	const std::string		&getName(void) const;
	const std::string		&getTitle(void) const;
>>>>>>> 3270c233b0e10d8d512b210ede14465f8916ffa4

};

std::ostream				&operator<<(std::ostream &os,
const Sorcerer &sorcerer);

#endif
