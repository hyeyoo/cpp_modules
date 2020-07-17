/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 03:02:21 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/16 03:47:50 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack(void): std::stack<T>()
{
	return ;
}

template<class T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}	

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &stack)
{
	*this = stack;
	return ;
}

template<class T>
MutantStack<T>		&MutantStack<T>::operator=(const MutantStack<T> &stack)
{
	std::stack<T>::operator = (stack);
	return (*this);
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}
