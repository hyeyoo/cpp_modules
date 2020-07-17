/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:48:03 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/16 03:47:30 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{

private:

public:
	MutantStack(void);
	~MutantStack(void);
	MutantStack(const MutantStack &stack);
	MutantStack		&operator=(const MutantStack &stack);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator		begin(void);
	iterator		end(void);
};

#endif
