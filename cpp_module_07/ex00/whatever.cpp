/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 06:50:03 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 18:22:59 by lmartin          ###   ########.fr       */
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
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
