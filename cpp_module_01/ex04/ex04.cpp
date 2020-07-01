/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:40:27 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 12:46:05 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int			main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string &ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
