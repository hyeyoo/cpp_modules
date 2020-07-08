/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 21:56:07 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 00:11:25 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Squad.hpp"

Squad::Squad(void)
{
	this->marines = NULL;
	this->size = 0;
	return ;
}

Squad::~Squad(void)
{
	t_lst_marine	*ptr;
	t_lst_marine	*next;

	ptr = this->marines;
	while (ptr)
	{
		next = ptr->next;
		delete(ptr->unit);
		delete(ptr);
		ptr = next;
	}
	return ;
}

Squad::Squad(const Squad &squad)
{
	*this = squad;
	return ;
}

Squad				&Squad::operator=(const Squad &squad)
{
	t_lst_marine	*ptr;
	t_lst_marine	*next;

	ptr = this->marines;
	while (ptr)
	{
		next = ptr->next;
		delete(ptr->unit);
		delete(ptr);
		ptr = next;
	}
	this->marines = NULL;
	this->size = 0;
	ptr = squad.marines;
	while (ptr)
	{
		this->push(ptr->unit);
		ptr = ptr->next;
	}
	return (*this);
}

int					Squad::getCount(void) const
{
	return (this->size);
}

ISpaceMarine		*Squad::getUnit(int n) const
{
	t_lst_marine	*ptr;

	if (n >= this->size)
		return (NULL);
	ptr = this->marines;
	while (n--)
		ptr = ptr->next;
	return (ptr->unit);
}

int					Squad::push(ISpaceMarine *marine)
{
	t_lst_marine	*m;
	t_lst_marine	*ptr;

	if (!marine)
		return (this->size);
	ptr = this->marines;
	while (ptr && ptr->next)
	{
		if (ptr->unit == marine)
			return (this->size);
		ptr = ptr->next;
	}
	m = new t_lst_marine();
	m->unit = marine;
	m->next = NULL;
	if (!ptr)
		this->marines = m;
	else
		ptr->next = m;
	return (++this->size);
}
