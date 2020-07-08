/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 03:08:04 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 03:18:30 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class ISquad
{

private:
	

public:
	virtual ISquad(void);
	virtual ~ISquad(void) {}
	virtual ISquad(const ISquad &isquad);
	virtual ISquad		&operator=(const ISquad &isquad);

	virtual int getCount(void) const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;

};

#endif
