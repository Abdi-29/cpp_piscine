#include "include/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	//bool isTriangle;

	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	point(30, 15);
	Point	point_in(100, 150);

	if (bsp(a, b, c, point))
		std::cout << "the points is in triangle";
	else
		std::cout << "the points is not in triangle";
	if (bsp(a, b, c, point_in))
		std::cout << "the points is in triangle";
	else
		std::cout << "the points is not in triangle";
	std::cout << std::endl;
	return 0;
}
