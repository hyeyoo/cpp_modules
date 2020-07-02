/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 04:42:58 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/02 07:59:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{

private:
	int					fixedPointValue;
	static const int	fracBits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed				&operator=(const Fixed &fixed);
	Fixed				&operator<<(const Fixed &fixed);
	float				toFloat(void) const;
	int					toInt(void) const;
	void				setRawBits(int const raw);
	int					getRawBits(void) const;

};

#endif
