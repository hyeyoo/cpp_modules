/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:40:05 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/08 23:15:00 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{

private:


public:
	TacticalMarine(void);
	~TacticalMarine(void);
	TacticalMarine(const TacticalMarine &marine);
	TacticalMarine			&operator=(const TacticalMarine &marine);

	ISpaceMarine			*clone(void) const;
	void					battleCry(void) const;
	void					rangedAttack(void) const;
	void					meleeAttack(void) const;

};

#endif
