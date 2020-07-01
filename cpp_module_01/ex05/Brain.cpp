/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:59:00 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:16:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream s;
	
	s << this;
	this->address = s.str();
	return ;
}

std::string		Brain::identify(void) const
{
	return (this->address);
}
