#include "include/Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return;
}

Point::Point(Point const &copy)
{
	*this = copy;
}

Point	&Point::operator=(const Point &copy)
{
	(void)copy;
	return *this;
}

float Point::getXvalue() const
{
	return _x.toFloat();
}

float Point::getYvalue() const
{
	return _y.toFloat();
}

Point::~Point(void)
{

}
