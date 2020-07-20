/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 00:10:55 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/20 12:29:53 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern
{

private:


public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &intern);
	Intern		&operator=(const Intern &intern);
	
	Form		*findForm(std::string &formName, std::string &targetName);
	Form		*makeForm(std::string formName, std::string targetName);
	Form		*createPresidentialPardonForm(std::string &target);
	Form		*createRobotomyRequestForm(std::string &target);
	Form		*createShrubberyCreationForm(std::string &target);

	class FormNotFoundException: public std::exception
	{

	public:
		FormNotFoundException(void);
		virtual ~FormNotFoundException(void) throw();
		FormNotFoundException(const FormNotFoundException &e);
		FormNotFoundException		&operator=(const FormNotFoundException &e);

		virtual const char *what(void) const throw();
	};

};

#endif
