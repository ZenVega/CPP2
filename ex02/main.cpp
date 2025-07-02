/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/02 17:18:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$
*/

#include "includes/main.hpp"

int main(void)
{
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "3 - 5 = " << (Fixed(3) - Fixed(5)) << endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
