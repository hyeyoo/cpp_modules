/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 05:15:09 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 06:36:20 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
	return ;
}

B::~B(void)
{
	return ;
}

B::B(const B &b)
{
	*this = b;
	return ;
}

B		&B::operator=(const B &b)
{
	(void)b;
	return (*this);
}
