/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:01:04 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 22:20:04 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap(void);
	SuperTrap(const SuperTrap &superTrap);
	SuperTrap		&operator=(const SuperTrap &superTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	
};

#endif
