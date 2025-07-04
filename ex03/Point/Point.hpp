/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:47:23 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/04 10:22:54 by uschmidt         ###   ########.fr       */
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
	Point(const Point &other);
	Point &operator=(const Point &other);

	float getX() const;
	float getY() const;
};

#endif
