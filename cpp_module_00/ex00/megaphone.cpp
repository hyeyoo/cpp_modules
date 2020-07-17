/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 21:32:18 by lmartin           #+#    #+#             */
/*   Updated: 2020/06/30 22:28:21 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 1)
	{
		i = 0;
		while (argv[++i] && (j = -1))
		{
			while (argv[i][++j])
				argv[i][j] -= (argv[i][j] >= 'a' &&
argv[i][j] <= 'z') ? 32 : 0;
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
