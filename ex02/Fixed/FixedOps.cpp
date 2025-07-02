/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOps.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:43:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/02 16:38:42 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		_value = other.getRawBits();
	}

	return (*this);
}

// OPERATIONAL
Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toInt() + other.toInt()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toInt() + other.toInt()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toInt() + other.toInt()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toInt() + other.toInt()));
}

// CONDITIONAL
bool Fixed::operator<(const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return true;
	return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return true;
	return (false);
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return true;
	return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return true;
	return (false);
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return true;
	return (false);
}

// NON-MEMBER
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
