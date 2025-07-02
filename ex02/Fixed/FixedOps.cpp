/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOps.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:43:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/02 17:20:19 by uschmidt         ###   ########.fr       */
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

// ARITHMETIC
Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// IN/DECREMENT
Fixed &Fixed::operator++(void)
{
	++_value;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	--_value;
	return (*this);
}

// IN/DECREMENT
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++_value;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--_value;
	return (temp);
}

// CONDITIONAL
bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

// NON-MEMBER
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
