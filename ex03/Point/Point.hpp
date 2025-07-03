/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:47:23 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/03 17:29:04 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "../Fixed/Fixed.hpp"
#include "../includes/CONSTANTS.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point();
	Point(float x, float y);
	Point(Point &other);
	Point &operator=(Point &other);

	float getX();
	float getY();
};

#endif
