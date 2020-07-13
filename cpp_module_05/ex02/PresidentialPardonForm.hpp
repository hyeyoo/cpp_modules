/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:46:58 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/13 21:22:23 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{

private:
	PresidentialPardonForm::PresidentialPardonForm(void);

public:
	PresidentialPardonForm::~PresidentialPardonForm(void);
	PresidentialPardonForm::PresidentialPardonForm
(const PresidentialPardonForm &form);
	PresidentialPardonForm		&operator=(const PresidentialPardonForm &form);

	PresidentialPardonForm::PresidentialPardonForm(std::string target);
	void						execute(Bureaucrat const &executor) const;

};

#endif
