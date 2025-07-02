/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/01 12:08:42 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int value)
{
	_value = value << _fract_bits;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

void Fixed::setFromFloat(float const raw)
{
	// using roundf here actually reduces precision loss,
	// since it calculates in decimals instead of just dropping them
	_value = roundf(raw * (1 << _fract_bits));
}

int Fixed::toInt(void) const
{
	return _value >> _fract_bits;
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fract_bits);
}
