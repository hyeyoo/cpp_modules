/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 04:22:14 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 04:22:17 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void			memoryLeak()
{
	std::string*		panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete(panthere);
}

int				main()
{
	memoryLeak();
	while (1);
}
