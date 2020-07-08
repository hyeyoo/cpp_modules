/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 03:19:02 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 23:16:12 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{

private:
	typedef struct		s_lst_marine
	{
		ISpaceMarine	*unit;
		s_lst_marine	*next;
	}					t_lst_marine;

	t_lst_marine		*marines;
	int					size;


public:
	Squad(void);
	~Squad(void);
	Squad(const Squad &squad);
	Squad				&operator=(const Squad &squad);

	int					getCount(void) const;
	ISpaceMarine		*getUnit(int n) const;
	int					push(ISpaceMarine *marine);

};

#endif
