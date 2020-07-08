/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 00:33:33 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 00:41:24 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource
{

public:
	virtual ~IMateriaSource(void) {}
	virtual void				learnMateria(AMateria *) = 0;
	virtual AMateria*			createMateria(std::string const &type) = 0;

};

#endif
