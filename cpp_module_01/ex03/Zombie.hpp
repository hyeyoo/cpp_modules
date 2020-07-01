/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:23:05 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:37:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

private:
	std::string	name;
	std::string	type;

public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	void	announce(void);
	void	setName(std::string name);
	void	setType(std::string type);

};

#endif
