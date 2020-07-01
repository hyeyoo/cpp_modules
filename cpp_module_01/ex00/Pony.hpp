/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 03:50:02 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/01 04:02:04 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{

private :
	std::string		color;

public :

	Pony(void);
	~Pony(void);

	void			walk(void);
	void			jump(void);
	std::string		getColor(void);
	void			setColor(std::string c);
};

#endif
