/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/02 17:15:10 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "../includes/CONSTANTS.hpp"
#include <cmath>
#include <sstream>
#include <string>

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

	// pre increment will return its own ref
	Fixed &operator++(void);
	Fixed &operator--(void);
	// post increment will actually return a new Fixed
	Fixed operator++(int);
	Fixed operator--(int);

	bool operator<(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator>(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	int	  getRawBits(void) const;
	void  setRawBits(int const raw);
	void  setFromFloat(float const raw);
	int	  toInt(void) const;
	float toFloat(void) const;

	// static because it works unitialized
	static Fixed		 &min(Fixed &first, Fixed &second);
	const static Fixed &min(const Fixed &first, const Fixed &second);
	static Fixed		 &max(Fixed &first, Fixed &second);
	const static Fixed &max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
