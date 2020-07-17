/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 01:52:01 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 03:15:45 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class	PhoneBook
{

private:

	int		index;
	Contact	contacts[8];

public:

	PhoneBook(void);
	void	search(void);
	void	incIndex(void);
	void	addContact(void);
	int		getIndex(void);

};

#endif
