/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:21:41 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 01:58:36 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{

protected:
	int				hp;
	std::string		type;

	Enemy(void);

public:
	virtual ~Enemy(void);
	Enemy(const Enemy &enemy);
	Enemy			&operator=(const Enemy &enemy);

	Enemy(int hp, std::string const &type);
	const std::string		&getType(void) const;
	int						getHP(void) const;
	virtual void			takeDamage(int);

};

#endif
