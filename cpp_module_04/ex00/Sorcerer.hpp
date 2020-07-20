/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:06:42 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 11:46:12 by lmartin          ###   ########.fr       */
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
	void			polymorph(Victim const &victim) const;
	std::string		getName(void) const;
	std::string		getTitle(void) const;

};

std::ostream				&operator<<(std::ostream &os,
const Sorcerer &sorcerer);

#endif
