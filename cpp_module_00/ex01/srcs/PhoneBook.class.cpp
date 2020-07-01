/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 01:56:55 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 03:40:28 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return ;
}

void		PhoneBook::search(void)
{
	int		i;
	
	if (!this->index)
	{
		std::cout << "No Contact, you should create one" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->index)
	{
		std::cout << "|         " << i;
		this->contacts[i++].smallPrint();
	}
	std::cout << "Pick a index" << std::endl;
	std::cin >> i;
	if (i < this->index)
	{
		std::cout << "============== " << i << " ==============" << std::endl;
		this->contacts[i].print();
	}
	else
		std::cout << "Wrong Index: Abort" << std::endl;
	return ;
}

void		PhoneBook::incIndex(void)
{
	this->index++;
	return ;
}

void		PhoneBook::addContact(void)
{
	std::string	input;
	Contact		*contact;

	if (this->index == 8)
	{
		std::cout << "PhoneBook FULL : Abort" << std::endl;
		return ;
	}
	contact = &this->contacts[this->index];
	std::cout << "========     FORM      ========" << std::endl;
	std::cout << "first name: ";
	std::cin >> input;
	contact->setFirstName(input);
	std::cout << "last name: ";
	std::cin >> input;
	contact->setLastName(input);
	std::cout << "nickname: ";
	std::cin >> input;
	contact->setNickname(input);
	std::cout << "login: ";
	std::cin >> input;
	contact->setLogin(input);
	std::cout << "postal address: ";
	std::cin >> input;
	contact->setPostalAddress(input);
	std::cout << "phone number: ";
	std::cin >> input;
	contact->setPhoneNumber(input);
	std::cout << "birthday date: ";
	std::cin >> input;
	contact->setBirthdayDate(input);
	std::cout << "favorite meal: ";
	std::cin >> input;
	contact->setFavoriteMeal(input);
	std::cout << "underwear color: ";
	std::cin >> input;
	contact->setUnderwearColor(input);
	std::cout << "darkest secret: ";
	std::cin >> input;
	contact->setDarkestSecret(input);
	this->index++;
	std::cout << "======== Contact Added ========" << std::endl;
	return ;
}

int			PhoneBook::getIndex(void)
{
	return (this->index);
}
