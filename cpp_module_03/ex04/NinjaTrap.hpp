/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 02:14:02 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 22:57:29 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public virtual ClapTrap
{

private:


public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	NinjaTrap(const NinjaTrap &ninjaTrap);
	NinjaTrap		&operator=(const NinjaTrap &ninjaTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			ninjaShoebox(ClapTrap &trap);
	void			ninjaShoebox(NinjaTrap &trap);
	void			ninjaShoebox(FragTrap &trap);
	void			ninjaShoebox(ScavTrap &trap);

};

#endif
