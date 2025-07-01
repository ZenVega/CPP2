/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/01 11:03:19 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_value = 0;
	cout << "Default constructor called" << endl;
}

// using the copy assignment constructur here is bad practise.
// it is very wasteful.
// first it calls the default constructor on *this. then overwrites its data.
// rather copy stats on the already existing object
Fixed::Fixed(const Fixed &other)
{
	cout << "Copy constructor called" << endl;
	*this = other;
}

// Fixed &: It returns a reference to the current Object - *this.
//	allows chaining?

// Fixed::operator=(const Fixed &other):
// Here we define the 'functionality' of the '=' operator.
// what happens, if Object = sth (in this case a reference to this class)
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
	cout << "getRawBits member function called" << endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	_value = raw;
}
