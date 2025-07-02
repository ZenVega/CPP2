/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/01 12:07:14 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "../includes/CONSTANTS.hpp"
#include <sstream>
#include <string>
// The 6 comparison operators: >, <, >=, <=, ==, and !=. +, -, *, and /.
class Fixed
{
private:
	int				 _value;
	static const int _fract_bits = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	~Fixed();

	Fixed &operator=(const Fixed &other);
	// These return a new Obj, no ref and don't mutuate this object
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	bool operator<(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator>(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;

	int	  getRawBits(void) const;
	void  setRawBits(int const raw);
	int	  toInt(void) const;
	float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
