/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:53:58 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 23:14:45 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

private:


public:
	AssaultTerminator(void);
	~AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &terminator);
	AssaultTerminator		&operator=(const AssaultTerminator &t);

	ISpaceMarine			*clone(void) const;
	void					battleCry(void) const;
	void					rangedAttack(void) const;
	void					meleeAttack(void) const;

};

#endif
