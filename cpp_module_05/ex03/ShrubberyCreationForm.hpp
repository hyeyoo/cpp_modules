/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:33:11 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/13 23:11:00 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

private:
	ShrubberyCreationForm(void);

public:
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	ShrubberyCreationForm		&operator=(const ShrubberyCreationForm &form);

	ShrubberyCreationForm(std::string target);
	void						execute(Bureaucrat const &executor) const;
};

#endif
