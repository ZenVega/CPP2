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

	Fixed  &operator=(const Fixed &other);
	ostream operator<<(const Fixed &other);

	int	  getRawBits(void) const;
	void  setRawBits(int const raw);
	int	  toInt(void) const;
	float toFloat(void) const;
};

// the left hand side of the operator has to be a Class instance to be defined as a member function, or use the 'friend' keyword.
// in order to use it on the right hand side, we need a non-member function. sice it cannot access private keys, we use the public toFloat function
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
