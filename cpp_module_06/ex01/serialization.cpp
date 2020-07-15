/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 01:31:15 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/15 04:17:27 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "serialization.hpp"

void			*serialize(void)
{
	char 	*data = new char[20]; // 8 + 4 + 8 bytes
	char	*ptr;
	char	alphanum[] = 
"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int		i;
	
	std::cout << "serialize()" << std::endl;
	ptr = data;	
	std::cout << "random alpha[8]: ";
	for (i = 0; i < 8; i++)
	{
		*ptr = alphanum[rand() % 62];
		std::cout << *ptr;
		ptr++;
	}
	std::cout << std::endl;
	i = rand() - (rand() + 1);
	std::cout << "random int: " << i << std::endl;
	*ptr++ = (i >> 24) & 255;
	*ptr++ = ((i << 8) >> 24) & 255; 
	*ptr++ = ((i << 16) >> 24) & 255;
	*ptr++ = ((i << 24) >> 24) & 255;
	std::cout << "random alpha[8]: ";
	for (i = 0; i < 8; i++)
	{
		*ptr = alphanum[rand() % 62];
		std::cout << *ptr;
		ptr++;
	}
	std::cout << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data			*deserialize(void *raw)
{
	Data	*data = new Data;
	char	*ptr;
	int		i;

	std:: cout << "deserialize()" << std::endl;
	ptr = reinterpret_cast<char*>(raw);
	for (i = 0; i < 8; i++)
		data->s1 += *ptr++;
	data->n = (*ptr++ & 255);
	data->n = (data->n << 8) + (*ptr++ & 255);
	data->n = (data->n << 8) + (*ptr++ & 255);
	data->n = (data->n << 8) + (*ptr++ & 255);
	for (i = 0; i < 8; i++)
		data->s2 += *ptr++;
	return (data);
}

int				main(void)
{
	int			i;
	void		*data;
	char		*ptr;
	Data		*dataa;

	srand(time(NULL));
	data = serialize();
	ptr = reinterpret_cast<char*>(data);
	std::cout << "data: ";
	for (i = 0; i < 20; i++)
		std::cout << *ptr++;
	std::cout << std::endl;
	dataa = deserialize(data);
	std::cout << "dataa: " << std::endl;
	std::cout << "s1: " << dataa->s1 << std::endl;
	std::cout << "n: " << dataa->n << std::endl;
	std::cout << "s2: " << dataa->s2 << std::endl;
	delete(dataa);
	return (0);
}
