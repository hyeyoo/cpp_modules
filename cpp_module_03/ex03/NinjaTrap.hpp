/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 02:14:02 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/07 02:28:49 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>

class NinjaTrap: public ClapTrap
{

private:


public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	NinjaTrap(const NinjaTrap &ninjaTrap);
	NinjaTrap		&operator=(const NinjaTrap &ninjaTrap);
	void			ninjaShoebox(void);

};

#endif
