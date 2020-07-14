/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:31:53 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 01:23:13 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cmath>
#include "Conversion.hpp"

void		printInt(Conversion &conv)
{
	int d;

	try
	{
		d = (int)conv;	
		std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printChar(Conversion &conv)
{
	char c;

	try
	{
		c = (char)conv;
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printFloat(Conversion &conv)
{
	float f;
	
	try
	{
		f = (float)conv;
		std::cout << f;
		if (fabs(f - round(f)) < 0.0001)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printDouble(Conversion &conv)
{
	double d;

	try
	{
		d = (double)conv;
		std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

int			main(int argc, char *argv[])
{
	Conversion *conv;

	(void)argc;
	if (argc != 2)
	{
		std::cerr << "usage: " << argv[0] << " value" << std::endl;
		return (0);
	}
	conv = new Conversion(argv[1]);
	std::cout << "char: ";
	printChar(*conv);
	std::cout << "int: ";
	printInt(*conv);
	std::cout << "float: ";
	printFloat(*conv);
	std::cout << "double: ";
	printDouble(*conv);
	return (0);
}
