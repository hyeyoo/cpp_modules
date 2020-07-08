/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 02:07:52 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 02:10:25 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{

private:


public:
	RadScorpion(void);
	~RadScorpion(void);
	RadScorpion(const RadScorpion &rad);
	RadScorpion			&operator=(const RadScorpion &rad);

};

#endif
