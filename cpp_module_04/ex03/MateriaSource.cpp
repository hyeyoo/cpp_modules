/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 00:43:07 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/09 01:22:44 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int i;

	i = 0;
	while (i < 4)
		this->memory[i++] = NULL;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	*this = source;
	return ;
}

MateriaSource			&MateriaSource::operator=(const MateriaSource &source)
{
	int i;

	i = 0;
	while (i < 4)
		this->memory[i] = source.memory[i];
	return (*this);
}

void					MateriaSource::learnMateria(AMateria *m)
{
	int i;

	i = 0;
	while (i < 4 && this->memory[i])
		i++;
	if (i < 4)
		this->memory[i] = m;
	return ;
}

AMateria				*MateriaSource::createMateria(std::string const &type)
{
	int i;

	i = 0;
	while (i < 4 && this->memory[i]->getType() != type)
		i++;
	if (this->memory[i]->getType() == type)
		return (this->memory[i]->clone());
	return (0);
}
