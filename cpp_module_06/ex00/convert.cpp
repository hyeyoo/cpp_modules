/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:31:53 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/14 17:18:59 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cmath>
#include "Conversion.hpp"

void		printInt(int d)
{
	return ;
}

void		printChar(char c)
{
	return ;
}

void		printFloat(float f)
{
	return ;
}

void		printDouble(double d)
{
	return ;
}

int			main(int argc, char *argv[])
{
	char c;
	int i;
	float f;
	double d;

	(void)argc;
	i = std::stoi(argv[1]);
	c = i;
	f = std::stof(argv[1]);
	d = std::stod(argv[1]);
	std::cout << "char: ";
	if (c > 31 && c < 127)
		std::cout << "'" << c << "'" << std::endl;
	else if (c >= -128 && c <= 127)
		std::cout << "Non displayable" << std::endl;	
	else
		std::cout << "impossible";
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f;
	if (fabs(f - round(f)) < 0.0001)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return (0);
}
