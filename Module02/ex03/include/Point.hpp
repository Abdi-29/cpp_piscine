#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point(void);
	Point(const float x, const float y);
	Point(Point const &copy);
	Point & operator =(Point const &copy);
	float getYvalue(void) const;
	float getXvalue(void) const;
	~Point(void);
};

#endif
