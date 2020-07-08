/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 03:08:04 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 21:52:45 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{

private:
	

public:
	virtual ~ISquad(void) {}
	virtual int getCount(void) const = 0;
	virtual ISpaceMarine* getUnit(int n) const = 0;
	virtual int push(ISpaceMarine *marine) = 0;

};

#endif
