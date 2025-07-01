/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 09:52:29 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/01 11:00:29 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/CONSTANTS.hpp"

class Fixed
{
private:
	int				 _value;
	static const int _fract_bits = 8;

public:
	Fixed();
	// The copy constructor takes its argument by reference,
	// this prevents unnecessarily copying the passed class.
	// Passing it as value might cause recursion
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	// cosnt means, state of Object can't be changed within this function
	int	 getRawBits(void) const;
	void setRawBits(int const raw);
};
