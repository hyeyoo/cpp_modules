/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 04:42:58 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/18 23:01:28 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

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
	Fixed				operator+(const Fixed &fixed) const;
	Fixed				operator-(const Fixed &fixed) const;
	Fixed				operator*(const Fixed &fixed) const;
	Fixed				operator/(const Fixed &fixed) const;
	bool				operator>(const Fixed &fixed) const;
	bool				operator<(const Fixed &fixed) const;
	bool				operator>=(const Fixed &fixed) const;
	bool				operator<=(const Fixed &fixed) const;
	bool				operator==(const Fixed &fixed) const;
	bool				operator!=(const Fixed &fixed) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);
	float				toFloat(void) const;
	int					toInt(void) const;
	void				setRawBits(int const raw);
	int					getRawBits(void) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	const static Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	const static Fixed	&max(const Fixed &a, const Fixed &b);

};

std::ostream			&operator<<(std::ostream &os,
const Fixed &fixed);

#endif
