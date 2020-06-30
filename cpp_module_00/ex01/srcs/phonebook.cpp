/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 22:48:20 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 00:25:39 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int			command(std::string input)
{
	if (!input.compare("ADD"))
	{
		std::cout << input << std::endl;
	}
	else if (!input.compare("SEARCH"))
	{
		std::cout << input << std::endl;
	}
	else if (!input.compare("EXIT"))
		exit (EXIT_SUCCESS);
	return (0);
}

int			main(void)
{
	std::string	input;

	while (std::cin >> input)
	{
		command(input);
	}
	return (0);
}
