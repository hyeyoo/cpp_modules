/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 23:25:40 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/16 01:04:55 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>

template <typename T>
int			easyfind(T &t, int n)
{
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), n);
	if (it == t.end())
		throw(std::exception());
	return (*it);
}


#endif
