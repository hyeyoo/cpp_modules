/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 00:25:22 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 22:37:50 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
		
private:


public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap		&operator=(const ScavTrap &scavTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			challengeNewcomer(void);

};

#endif
