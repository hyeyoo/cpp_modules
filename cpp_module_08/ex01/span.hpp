/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 01:09:03 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/16 02:06:47 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

private:
	unsigned int	 size;
	std::vector<int> array;


public:
	Span(void);
	~Span(void);
	Span(const Span &span);
	Span	&operator=(const Span &span);

	Span(unsigned int size);
	void			addNumber(int nb);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif
