/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 04:08:34 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/05 10:51:48 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constractor !!" << std::endl;
}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{
	// std::cout << "Constractor with parameters !!" << std::endl;
}

Point::~Point()
{
	// std::cout << "Default Destractor !!" << std::endl;
}

Point& Point::operator=(const Point &p)
{
	(void) p;
	return *this;
	// // std::cout << "assignment operator called" << std::endl;
	// /*(Fixed)*/(this->_x) = p._x;
	// /*(Fixed)*/(this->_y) = p._y;
	// return *this;
}

Point::Point(const Point &p) : _x(p._x), _y(p._y)
{
	// std::cout << "Copy constractor called !!" << std::endl;
}

float Point::get_x() const
{
	return (this->_x.toFloat());
}

float Point::get_y() const
{
	return (this->_y.toFloat());
}


float get_area(Point const a, Point const b, Point const c)
{
	float area = 1;

	std::cout << "Area of the triangle is : " << area << std::endl;
	std::cout << "Point A : (" << a.get_x() << ", " << a.get_y() << ")" << std::endl;
	std::cout << "Point B : (" << b.get_x() << ", " << b.get_y() << ")" << std::endl;
	area = 0.5 * fabs(((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()))));
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area1;
	float area2;
	float area3;
	float area;

	std::cout  << "******************"<< a.get_x() << std::endl;
	std::cout  << "******************"<< a.get_y() << std::endl;
	area1 = get_area(a, b, point);
	area2 = get_area(a, c, point);
	area3 = get_area(b, c, point);
	area = get_area(a, b, c);
	std::cout << "area1 = " << area1 << std::endl;
	std::cout << "area2 = " << area2 << std::endl;
	std::cout << "area3 = " << area3 << std::endl;
	std::cout << "area = " << area << std::endl;
	if (area !=  area1 + area2 + area3 or area1 == 0 or area2 == 0 or area3 == 0)
		return (false);
	return (true);
}