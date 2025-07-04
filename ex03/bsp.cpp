/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:13:01 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/04 10:04:43 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vector cross product
// cross=AB×AP=(Bx−Ax)(Py−Ay)−(By−Ay)(Px−Ax)

#include "Point/Point.hpp"

enum Dir
{
	LEFT,
	RIGHT,
	UNDEFINED
};

int getCrossProd(Point a, Point b, Point p)
{
	float crossProd =
		(b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX());
	return crossProd;
}

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Dir			dir			= UNDEFINED;
	const Point triangle[3] = {a, b, c};
	float		tempCP;

	for (int i = 0; i < 3; i++)
	{
		if (i == 2)
			tempCP = getCrossProd(triangle[i], triangle[0], point);
		else
			tempCP = getCrossProd(triangle[i], triangle[i + 1], point);
		if (tempCP > 0)
		{
			if (dir == LEFT)
				return false;
			else if (dir == UNDEFINED)
				dir = RIGHT;
		}
		else if (tempCP < 0)
		{
			if (dir == RIGHT)
				return false;
			else if (dir == UNDEFINED)
				dir = LEFT;
		}
		else if (tempCP == 0)
			return false;
	}
	return true;
}
