#include "Point.hpp"

Point::Point() :
	_x(Fixed()), _y(Fixed()) {}

Point::Point(float x, float y) :
	_x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &other) :
	_x(other._x), _y(other._y) {}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
		std::cerr << "Assignment operator called, but Point is immutable (const members)" << std::endl;
	return *this;
}

float Point::getX() const
{
	return _x.toFloat();
}

float Point::getY() const
{
	return _y.toFloat();
}
