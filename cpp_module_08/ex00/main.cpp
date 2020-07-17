/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 23:25:43 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/16 01:05:09 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> vec;
	
	std::cout << "Empty vec test" << std::endl;
	try
	{
		std::cout << easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Not found" << std::endl;
	}
	vec.push_back(10);
	vec.push_back(42);
	std::cout << "add 10 & 42" << std::endl;
	try
	{
		std::cout << easyfind(vec, 10) << std::endl;
		std::cout << easyfind(vec, 42) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Not found" << std::endl;
	}	
	std::cout << "try to find unexistent values" << std::endl;
	try
	{
		std::cout << easyfind(vec, -10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Not found" << std::endl;
	}
	return (0);
}
