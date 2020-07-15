/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:25:52 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 18:48:19 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
void		iter(T *addr, size_t length, void (*function)(const T &))
{
	T *ptr;

	ptr = addr;
	while (ptr && length--)
		function(*ptr++);	
	return ;
}

template <class T>
void		printElem(const T &elem)
{
	std::cout << elem;
	return ;
}

int			main(void)
{
	int n[] = {1, 2, 3};
	std::string s[] = {"aaa", "bbb", "ccc"};

	iter(n, 3, printElem);
	std::cout << std::endl;
	iter(s, 3, printElem);
	std::cout << std::endl;
	return (0);
}
