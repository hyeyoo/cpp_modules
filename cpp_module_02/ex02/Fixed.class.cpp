/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 04:50:29 by lmartin           #+#    #+#             */
/*   Updated: 2020/07/06 22:37:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	this->fixedPointValue = 0;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	return ;
}

Fixed::Fixed(const int nb)
{
	this->fixedPointValue = nb << this->fracBits;
	return ;
}

Fixed::Fixed(const float nb)
{
	this->fixedPointValue = roundf(nb * (1 << this->fracBits));
	return ;
}

Fixed			&Fixed::operator=(const Fixed &fixed)
{
	this->fixedPointValue = fixed.fixedPointValue;
	return (*this);
}

Fixed			Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed			Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed			Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed			Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

bool			Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool			Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool			Fixed::operator>=(const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool			Fixed::operator<=(const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool			Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool			Fixed::operator!=(const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed			&Fixed::operator++()
{
	++this->fixedPointValue;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed tmp = (*this);
	++(*this);
	return (tmp);
}

Fixed			&Fixed::operator--()
{
	--this->fixedPointValue;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed tmp = (*this);
	--(*this);
	return (tmp);
}

float			Fixed::toFloat(void) const
{
	return (((float)this->fixedPointValue) / (1 << this->fracBits));
}

int				Fixed::toInt(void) const
{
	return (this->fixedPointValue >> this->fracBits);
}

void			Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;	
	return ;
}

int				Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed			&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed			&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}
