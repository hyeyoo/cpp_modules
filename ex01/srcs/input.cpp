/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 02:00:46 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 03:38:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.hpp"

void		command(std::string input, PhoneBook *phonebook)
{
	if (!input.compare("ADD"))
		phonebook->addContact();
	else if (!input.compare("SEARCH"))
		phonebook->search();
	else if (!input.compare("EXIT"))
		exit (EXIT_SUCCESS);
	return ;
}

int			main(void)
{
	std::string	input;
	PhoneBook	phonebook;

	while (std::cout << "MENU: ADD - SEARCH - EXIT" << std::endl)
	{
		std::cin >> input;
		command(input, &phonebook);
	}
	return (0);
}
