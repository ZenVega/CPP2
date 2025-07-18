/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/03 13:30:12 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_value = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _fract_bits;
}

Fixed::Fixed(const float value)
{
	_value = value * (1 << _fract_bits);
}

Fixed::Fixed(const Fixed &other)
{
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		_value = other.getRawBits();
	}
	std::cout << "Copy Assignment Operator Called!" << std::endl;

	return (*this);
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return _value >> _fract_bits;
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fract_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
