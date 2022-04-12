#include "include/Point.hpp"

float	sign(Point const p1, Point const p2, Point const p3)
{
	return (p1.getXvalue() - p3.getXvalue()) *
			(p2.getYvalue() - p3.getYvalue()) -
			(p2.getXvalue() - p3.getXvalue()) *
			(p1.getYvalue() - p3.getYvalue());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1;
	float 	d2;
	float 	d3;
	bool	hasNeg;
	bool 	hasPos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);
	std::cout << d1 << d2 << d3 << std::endl;
	hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	//std::cout << hasNeg << hasPos << std::endl;
	return !(hasNeg && hasPos);
}