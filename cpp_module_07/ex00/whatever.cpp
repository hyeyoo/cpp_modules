/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 06:50:03 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 18:16:03 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template	<class T>
void		swap(T &arg1, T &arg2)
{
	T tmp;
	
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
	return ;
}

template	<class T>
const 		T&min(const T &arg1, const T &arg2)
{
	return ((arg1 < arg2) ? arg1 : arg2);
}

template	<class T>
const		T&max(const T &arg1, const T &arg2)
{
	return ((arg1 > arg2) ? arg1 : arg2);
}

int			main(void)
{
	std::string s1 = "bla";
	std::string s2 = "blo";

	std::cout << "s1: " << s1 << std::endl;	
	std::cout << "s2: " << s2 << std::endl;	
	std::cout << "swap(s1, s2)" << std::endl;
	::swap(s1, s2);
	std::cout << "s1: " << s1 << std::endl;	
	std::cout << "s2: " << s2 << std::endl;	
	std::cout << "min(s1, s2): " << ::min(s1, s2) << std::endl;
	std::cout << "max(s1, s2): " << ::max(s1, s2) << std::endl;
	int i = 2;
	int j = 3;
	std::cout << "i: " << i << std::endl;	
	std::cout << "j: " << j << std::endl;	
	std::cout << "swap(i, j)" << std::endl;
	::swap(i, j);
	std::cout << "i: " << i << std::endl;	
	std::cout << "j: " << j << std::endl;	
	std::cout << "min(i, j): " << ::min(i, j) << std::endl;
	std::cout << "max(i, j): " << ::max(i, j) << std::endl;
}
