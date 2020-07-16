/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 01:25:10 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 03:14:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class	Contact 
{

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

public:

	void		smallPrint(void);
	void		print(void);
	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickname(std::string str);
	void		setLogin(std::string str);
	void		setPostalAddress(std::string str);
	void		setPhoneNumber(std::string str);
	void		setBirthdayDate(std::string str);
	void		setFavoriteMeal(std::string str);
	void		setUnderwearColor(std::string str);
	void		setDarkestSecret(std::string str);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string	getPostalAddress();
	std::string	getPhoneNumber();
	std::string	getBirthdayDate();
	std::string	getFavoriteMeal();
	std::string	getUnderwearColor();
	std::string	getDarkestSecret();

};

#endif
