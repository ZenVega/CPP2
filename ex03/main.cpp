/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/04 10:42:37 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main(void)
{
	Point a		  = Point(0, 0);
	Point b		  = Point(10, 0);
	Point c		  = Point(5, 10);
	Point inside  = Point(7, 3);
	Point outside = Point(2, 10);

	if (bsp(a, b, c, inside))
	{
		cout << "Point: " << inside.getX() << "/" << inside.getY() << " is inside Triangle:" << endl;
		cout << "A: " << a.getX() << "/" << a.getY() << endl;
		cout << "B: " << b.getX() << "/" << b.getY() << endl;
		cout << "C: " << c.getX() << "/" << c.getY() << endl;
	}
	else
		cout << "Bugs bugs bugs" << endl;
	if (!bsp(a, b, c, outside))
		cout << "Point: " << outside.getX() << "/" << outside.getY() << " is outside Triangle" << endl;
	else
		cout << "Bugs bugs bugs" << endl;
	return 0;
}
