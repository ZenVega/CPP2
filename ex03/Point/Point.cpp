#include "Point.hpp"

Point::Point() :
	_x(Fixed()), _y(Fixed()) {}

Point::Point(float x, float y) :
	_x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point &other)
{
	*this = other;
}

Point &Point::operator=(Point &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

float Point::getX()
{
	return _x.toFloat();
}

float Point::getY()
{
	return _y.toFloat();
}
