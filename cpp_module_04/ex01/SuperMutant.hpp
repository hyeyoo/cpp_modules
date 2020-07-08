/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:39:01 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 02:06:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{

private:


public:
	SuperMutant(void);
	~SuperMutant(void);
	SuperMutant(const SuperMutant &super);
	SuperMutant			&operator=(const SuperMutant &super);

	void				takeDamage(int damage);

};

#endif
