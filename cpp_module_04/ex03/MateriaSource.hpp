/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 00:36:53 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:21:03 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

private:
	AMateria			*memory[4];

public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(const MateriaSource &source);
	MateriaSource		&operator=(const MateriaSource &source);

	void				learnMateria(AMateria *);
	AMateria*			createMateria(std::string const &type);

};

#endif
