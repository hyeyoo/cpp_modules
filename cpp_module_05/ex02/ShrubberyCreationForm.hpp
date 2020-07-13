/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:33:11 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/13 00:01:41 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "Form.hpp"

class ShruberryCreationForm: public Form
{

private:
	ShruberryCreationForm(void);

public:
	~ShruberryCreationForm(void);
	ShruberryCreationForm(const ShruberryCreationForm &form);
	ShruberryCreationForm		&operator=(const ShruberryCreationForm &form);

	ShruberryCreationForm::ShruberryCreationForm(std::string target);
	void						action(void);
};

#endif
