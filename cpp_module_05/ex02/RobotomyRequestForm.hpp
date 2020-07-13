/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 04:42:05 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/12 23:56:26 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{

private:
	RobotomyRequestForm(void);

public:
	~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm		&operator=(const RobotomyRequestForm &form);

	RobotomyRequestForm(std::string target);
	void					action(void);
};

#endif
