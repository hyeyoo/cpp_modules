/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 13:10:16 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 13:15:05 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain		Human::getBrain(void)
{
	return (this->brain);
}

std::string		Human::identify(void)
{
	return (this->brain.identify());
}
